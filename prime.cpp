#include <iostream>
using namespace std;
	int main() {
	    // Write C++ code here
	   int n;
       cin>>n;
	   bool flag= true;
	   int i=2;
	   while(i<n){
	       if(n%i==0){
            cout<<"\nNumber is not prime for "<<i<<"\n";
	         flag= false;
	         break;
	       }
	      i++;
	  
	}
	if(flag){
	  cout << n << " is a prime number";}
	  else{
	    cout << n << " is not a prime number";}
	}