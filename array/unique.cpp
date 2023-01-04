#include<bits/stdc++.h> 
using namespace std;

void unique(int arr[], int size){
      int uni=0;
      vector<int>u;
  for(int i=0;i<size;i++){   
int c=0;
      for(int j=0;j<size;j++){
          
          if(arr[i]==arr[j] && i!=j){  
              c++;  }  }
              if(c==0){
                uni++;
                u.push_back(arr[i]);
              }}
              cout<<"Number of unique "<<uni<<"\n";
              for(auto k:u){
                cout<<k<<" ";
              }


}
int main(){
    
    
    int size=8;
    int arr[8]={1,1,2,2,5,6,9,9};
    // cin>>size;
    //   for (int i = 0; i < size; i++)  
    // {
    //     cin >> arr[i];  
    // }  
    
   unique(arr,size);}