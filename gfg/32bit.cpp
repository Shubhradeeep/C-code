#include<bits/stdc++.h> 
using namespace std;

long long reversedBits(long long X) {
     vector<int> arr(32,0);
        int ind = 0;
        while(X!=0) {
            arr[ind] = X%2;
            X/= 2;
            ind++;
        }
        //
          for(int i=0;i<32;i++) {
            cout<<arr[i];
        }cout<<"\n";

        
        long long sum = 0;
        for(int i=0;i<32;i++) {
            sum = 2*sum + arr[i];
        }
        
        return sum;
}
int main()
{ int X;
cin>>X;
cout<<reversedBits(X);
    
}
