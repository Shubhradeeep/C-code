#include<bits/stdc++.h> 
using namespace std;

 vector<int> fre(vector<int>& nums) {
        unordered_map<int,int> m;
for(auto i:nums){
m[i]++;
}
for(int i=0;i<nums.size();i++){
    cout<<m[i]<<" ";
}

sort(nums.begin(),nums.end(),[&](int a, int b)
             {return m[a]!=m[b]? m[a]<m[b]: a<b;});

return nums;

}
    int main(){
       vector<int>nums ={2, 3, 2, 3, 0};
      fre(nums);
      cout<<"\n"<<"sort array willbe"<<"\n";
      for(auto it:nums){
    cout<<it<<" ";}
    }