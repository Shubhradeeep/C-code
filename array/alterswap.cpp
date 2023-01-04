#include<bits/stdc++.h> 
using namespace std;

void reverse(int arr[], int n){
    
 int i;
 for(i=0;i<n;i+=2){
     if(i+1<n)
     swap(arr[i],arr[i+1]);
     
 }
}
void display(int arr[], int n){
    int i;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
}
int main(){
    int arr[100];
    int n;
    cin>>n;
      for (int i = 0; i < n; i++)  
    {
        cin >> arr[i];  
    }  
    
    reverse(arr,n);
    display(arr,n);
}