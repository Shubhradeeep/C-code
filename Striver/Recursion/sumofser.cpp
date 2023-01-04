#include<bits/stdc++.h>  
using namespace std;
 long long sumOfSeries(long N,int p) {
        
        long long sum=0;
      for(long i=1;i<=N;i++){
          sum+=powl(i,p);   
                              //if(N==0)return sum; //sum=(sum+pow(N,3));//sumOfSeries(N-1);

                              //if(N==0) return 0; // return pow(N,3) + sumOfSeries(N-1);
      }return sum;
        
    }
int main(){
    long N;int p;
    cout<<"Enter Number ";
    cin>>N>>p;
    cout<<sumOfSeries(N,p);

}
    