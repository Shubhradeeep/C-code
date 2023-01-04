#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int>v2;
    v2.push_back(10); v2.push_back(101); v2.push_back(102); v2.push_back(201);v2.push_back(708);
    vector<int>v;
    v.push_back(4); v.push_back(1); v.push_back(2); v.push_back(21);v.push_back(78);
    v.push_back(0);
    v.push_back(3);v.push_back(74); v.push_back(454);
    v.push_back(8);
    
    for(auto it:v){
        cout<<it<<" ";
    }cout<<"\n";
    v.erase(v.begin()+2);
     for(auto it:v){
        cout<<it<<" ";
    }cout<<"\n";

    v.erase(v.begin()+2,v.begin()+5);
     for(auto it:v){
        cout<<it<<" ";
    }cout<<"\n";

v.insert(v.begin()+3,2,100);
     for(auto it:v){
        cout<<it<<" ";
    }cout<<"\n";

    v.insert(v.begin(),v2.begin(),v2.end());
     for(auto i:v){
        cout<<i<<" ";
    }cout<<"\n";


    
    }









    