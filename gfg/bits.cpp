#include<bits/stdc++.h> 
using namespace std;
void bit(int n){
    int arr[100],num=n ,k=0,j,i=0,ans=0;
    
    while(n!=0){
        arr[i]=n%2;
         i++;
        n=n>>1;
       
    }
      for(j=i-1;j>-1;j--){
           cout<<arr[j];
       }
}
int main(){
    int n;
    cin>>n;
    bit(n);
}