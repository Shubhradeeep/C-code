// #include<bits/stdc++.h> 
// using namespace std;

// void reverse(int arr[], int size){
//     int c=0; set<int>u,d;
//   for(int i=0;i<size;i++){    
//       for(int j=0;j<size;j++){    
//           if(arr[i]==arr[j] && i!=j){  
//               c++;    
//         d.insert(arr[i]);
//               }} }
//                for(auto k:d){
//                 cout<<k<<" ";
//               } }
// int main(){
//     int size=8;
//     int arr[8]={1,1,2,2,5,6,9,9};
//     // cin>>size;//   for (int i = 0; i < size; i++)  // {//     cin >> arr[i];  // }  
//     reverse(arr,size);}



#include<bits/stdc++.h> 
using namespace std;

int findDuplicate(int arr[],int size) 
{
    // Write your code here
	unordered_map<int, int> m;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if((it.second)>1)
           cout<<it.first << " ";
    }}

 int main(){
int size=9;
int arr[9]={1,5,5,7,2,2,7,3,3};
findDuplicate(arr,size);}
