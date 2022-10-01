/*
     ContestName     =   Shinchu_itachi
   " Walking on the road not taken with my own gutts.. "
*/


#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>> matrix;

void compute( vector<vector<int>> &matrix , int n ) {
    int k ; cin >> k ;
    while ( k -- > 0 ) {
        int a , b , c , d;
        cin >> a >> b >> c >> d ;

        matrix[c][d] = matrix[c][d] - matrix[a - 1][d] - matrix[c][b - 1] + matrix[a - 1][b  - 1];

        cout << matrix[c][d] << endl;
    }

}

void prefix( vector<vector<int>> & matrix , int n) {
    for ( int i = 1 ; i < n ; i ++ ) {
        matrix[i][0] += matrix[i - 1][0];
    }

    for ( int i = 1 ; i < n ; i ++ ) {
        matrix[0][i] += matrix[0][i - 1];
    }

    for ( int i = 1 ; i < n ; i ++) {
        for ( int j = 1 ; j < n ; j ++ ) {
            matrix[i][j] = matrix[i][j] + matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
        }
    }

    compute( matrix , n );
    for ( int i = 0 ; i < n ; i ++) {
        for ( int j = 0 ; j < n ; j ++ ) {
            cout << matrix[i][j] << " " ;
        }
        cout << endl;
    }



}
void solve() {
    int n ; cin >> n;
    matrix.resize( n , vector<int> ( n , 0));

    for ( int i = 0 ; i < n ; i ++)
        for ( int j = 0 ; j < n ; j ++) cin >> matrix[i][j];

    prefix( matrix , n );

}



inline void testcases() {
    int test = 1, testcase = 1 ;
    // cin >> test ;

    cout << setprecision(12) ;
    cerr << setprecision(8) ;
    while (test --) {
        // cout << "Case #" << testcase++ << ": ";
        solve () ;
    }
}





int main () {
    fastio();

#ifndef ONLINE_JUDGE
    // freopen("output.txt", "w", stdout);
    // freopen("input.txt", "r", stdin);
    //freopen("error.txt", "w", stderr);
#endif

    auto start = high_resolution_clock::now();

    testcases();

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cerr << "Time : " << duration.count() / 1000 ;
}
