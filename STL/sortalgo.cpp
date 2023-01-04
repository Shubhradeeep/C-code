#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"ENTER THE SIZE  ";
    int size,input;  cin>>size;
    vector<int>v,ve;
     for(int i=0;i<size;i++){
        cin>>input;
        v.push_back(input);
     }
     for(auto i:v){
         cout<<i<<" ";
     }
     sort(v.begin(),v.end());
    cout<<"AFTER SORT "<<"\n";
    for(auto i:v){
         cout<<i<<" ";
     }cout<<"\n";
     cout<<"Finding "<<binary_search(v.begin(),v.end(),89)<<"\n";
     cout<<"Finding "<<lower_bound(v.begin(),v.end(),99)-v.begin()<<"\n";
     cout<<"Finding "<<upper_bound(v.begin(),v.end(),99)-v.begin()<<"\n";
      sort(v.begin(),v.end(),greater<>());
    cout<<"AFTER SORT "<<"\n";
    for(auto i:v){
         cout<<i<<" ";
     }cout<<"\n";

     
}