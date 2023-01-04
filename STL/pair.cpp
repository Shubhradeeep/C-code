#include<iostream>
#include<vector>
using namespace std;
int main(){
     pair<int,pair<string,string>>v{1,{"SHU BH","yi HH"}};
      cout <<v.first << " "<<v.second.first<<" "<<v.second.second<<" " ;
cout<<"\n";


pair<int,pair<int,int>>vec{3,{9,4}};

     cout <<vec.first << " "<<vec.second.first<<" "<<vec.second.second<<" " ;
cout<<"\n";


pair<int,pair<int,int>>arr[]={{3,{9,4}}, {3,{1,4}}, {1,{9,4}}};
cout<<arr[2].second.first;
}