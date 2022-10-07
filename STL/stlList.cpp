#include<iostream>
#include<list>
using namespace std ; 

int main(){
    list<int> l ;

    //copying the list
    list<int> n(5,100);
    cout<<"printing n "<<endl;
    for(int i : n){
        cout<<i<<" ";
    }

    l.push_back(1);
    l.push_front(2);


    for(int i : l){
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin()); //end too
    

    cout<<"size of list"<<l.size()<<endl;
}
