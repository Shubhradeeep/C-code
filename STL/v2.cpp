//using emplace_back
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(1);
v.emplace_back(2);
for (int i:v)
{
     cout <<i << " ";
}cout<<"\n";
cout<<"CAPACITY "<<v.capacity()<<"\n";
cout<<"SIZE "<<v.size()<<"\n";

vector<pair<int,int>>vec;
//vec.push_back({3,4});
//vec.push_back(make_pair(3,4));
vec.emplace_back(3,4);

for (int i=0;i<vec.size();i++)
{
     cout <<vec[i].first << " "<<vec[i].second<< " ";
}cout<<"\n";
}