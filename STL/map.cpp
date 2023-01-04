#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int,string>m;
    map<int,pair<int,string>>mp;  
    m[10]="Maity"; m[1]="Aaity";m[0]="Kaity";

     mp[10]={12,"saity"};  mp[9]={90,"laity"};  mp[0]={1,"paity"};
      
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<"\n";
    }
     for(auto i:mp){
    cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<"\n";
    }
    }