#include <bits/stdc++.h> 
using namespace std;
int shakeHands(vector<int> &friends ,int n, int k)
{
    // Write your code here.
    for(auto i:friends){
     if(i==k)
         k=k*2  ;
    }
    return k;
}

int main(){
    int k=2,n=5;
    vector<int>friends= {1,2,3,4,5};
    cout<<shakeHands(friends,n,k);
}