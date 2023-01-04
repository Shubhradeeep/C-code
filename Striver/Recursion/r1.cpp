#include<bits/stdc++.h>  
using namespace std;
void print(int i,int n){
 if(i==0)
 return;
 cout<<i<<" "<<"HELLO"<<"\n"; ///5,4,3,.....
print(i-1,n); //cout<<i<<" "<<"HELLO"<<"\n"; // BACKTRACKING 1,2,3,4......
}
int main(){
    int i,n;
    cin>>n;
    print(n,n);
}