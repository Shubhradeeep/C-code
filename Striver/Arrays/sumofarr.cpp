#include<bits/stdc++.h>  
#include<iostream>  
using namespace std;

int getsum(int arr[],int size){
    int sum=0;
for (int i=0; i<size;i++) 
{
  sum+=arr[i];
}
return sum;
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
cout<<"sum is "<<getsum(arr,size)<<endl;
return 0;
}

