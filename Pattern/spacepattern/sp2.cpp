#include <iostream>
	using namespace std;
	int main() {
	    int n;
       cin>>n;
       int count=1;
	    int i=1;
	    while(i<=n){
               int space=1;
            while(space<=i-1){
                cout<<" ";
                space++;
            }
            
	        int j=i;
            while(j<=n){
                cout<<count;
                count++;
                j++;
                }
             
             
        cout<<"\n";
        i++;
	    }
	}