#include<bits/stdc++.h> 
using namespace std;
void doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
       // vector<int>v;
        for(int i=0;i<n;i++)
        { s.insert(a[i]);}
        for(int j=0;j<m;j++)
        {
            //if(a[i]==b[j])
            s.insert(b[j]);}
        for(auto it:s){
            cout<<it<<" ";
        }
     cout<<"\n"<<s.size();
    }
    int main(){
    int m,n;
    //int a[10], b[10];
    int a[4]={1,2,3,4};
    int b[3]={9,78,89};
doUnion(a,4,b,3);
       }