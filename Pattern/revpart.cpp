#include <iostream>
	using namespace std;
	int main() {
	    int n;
        //char count='A';
	    cin>>n;
	    int i=1;
	    while(i<=n){
            char ch='A'+n-i;//*********
	        int j=1;
        while(j<=i){
          cout<<ch;  
          ch++;  //***********
          // count++;
            j++;
        }
        cout<<"\n";
        i++;
	    }
	}