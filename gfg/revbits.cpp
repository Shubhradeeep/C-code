#include<bits/stdc++.h> 
using namespace std;
void bit(int n){
    int arr[100],j,i=0,sum=0;
    
    while(n!=0){
        arr[i]=n%2;
         i++;
        n=n>>1;
       
    }
    //binary
    for(j=i-1;j>-1;j--){
           cout<<arr[j];
       }cout<<"\n";

                       //reversebit
                      for(j=0;j<i;j++){
                           cout<<arr[j];
                       }cout<<"\n";
            
                                                                   // for(j=0;j<32;j++){
                                                                   //     sum = 2*sum + arr[i];
                                                                   // }cout<<sum;
}
int main(){
    int n;
    cin>>n;
    bit(n);
     bitset<32>bit(5);
    cout<<bit;
}