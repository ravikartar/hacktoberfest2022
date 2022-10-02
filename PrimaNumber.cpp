#include<iostream>

using namespace std;

int main()
{
    int bilangan;
    bool hasil = true;

    cout<<"Masukan bilangan bulat positif = ";
    cin>>bilangan;

    for(int i = 2; i < bilangan; i++){
        if(bilangan % i == 0){
            hasil = false;
        }
    }

    if(hasil){
        cout<<"Bilangan "<<bilangan<<" adalah bilangan prima"<<endl;
    }else{
        cout<<"Bilangan "<<bilangan<<" bukan bilangan prima"<<endl;
    }

    return 0;
}
