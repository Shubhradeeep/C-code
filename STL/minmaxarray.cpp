#include<bits/stdc++.h>  
using namespace std;

int getMax(int arr[],int size){
int maxi= INT_MIN;
for (int i=0; i<size;i++) 
{
 maxi=max(maxi ,arr[i]);
}
return maxi;
}
int getMin(int arr[],int size){
int mini= INT_MAX;
for (int i=0; i<size;i++) 
{
 mini=min(mini ,arr[i]);
}
return mini;
}

int main(){
   int size;
   cin>> size ;
//array<int,10>arr;
int arr[100];
for(int i=0; i<size;i++){
    cin>>arr[i];
}
//int x=getMax(arr,size);
cout<<"Maximum is "<<getMax(arr,size)<<endl;
cout<<"Maximum is "<<getMin(arr,size)<<endl;
return 0;
}

