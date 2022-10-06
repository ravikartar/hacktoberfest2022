#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v ;
    vector<int> a(5,1); //5 is size of vector , and all of them are initialised with a 
    
    vector<int> last(a);
    cout<<"print a"<<endl;
    for(int i :last){
        cout<<i<<" ";
    } 
    cout<<endl;

    cout<<"size and capacity is "<<v.capacity()<<endl;

    v.push_back(1); //to but elements 
     cout<<"size aqnd capacity is  "<<v.capacity()<<endl;

     
    v.push_back(2);
     cout<<"size and capacity is "<<v.capacity()<<endl;
     
    v.push_back(3);   //capacity gets doubled when it is completely filled
     cout<<"capacity "<<v.capacity()<<endl;
     cout<<"size "<<v.size()<<endl;

     //at operation 
     cout<<"Element at 2nd Index "<<v.at(2)<<endl; 

     //front and back can be used here too
     cout<<"front"<<v.front()<<endl;
     cout<<"back"<<v.back()<<endl;

     //pop back
     cout<<"before pop"<<endl;
     for(int i :v){
        cout<<i<<" ";
     }cout<<endl;

     v.pop_back();

    cout<<"after pop"<<endl;
     for(int i :v){
        cout<<i<<" ";
     }

     //clear vector : size becomes 0 but the capacity doesnt 
      cout<<"before clear size "<<v.size()<<endl;
      v.clear();
      cout<<"after clear size "<<v.size()<<endl;
}
