#include<bits/stdc++.h> 
using namespace std;

void reverse(int arr[], int n){
    
    reverse(arr, arr + n); 
}
void display(int arr[], int n){
    int i;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
}
int main(){
    int arr[100];
    //int n = sizeof(arr)/sizeof(arr[0]);  
    int n;
    cin>>n;
      for (int i = 0; i < n; i++)  
    {
        cin >> arr[i];  
    }  
    
    reverse(arr,n);
    display(arr,n);
}