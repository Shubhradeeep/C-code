#include<bits/stdc++.h>  
using namespace std;
void sortt(int a[], int n)
    {
        // code here 
        sort(a,a+n);
        
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
            
        }
        
    }
    int main() {
      int n,a[100]={0,0,1,1,2};
  sortt(a,5);
  return 0;
}