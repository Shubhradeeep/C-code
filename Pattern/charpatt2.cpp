#include <iostream>
	using namespace std;
	int main() {
	    int n;
       
	    cin>>n;
	    int i=1;
	    while(i<=n){
            char ch='A'+i-1;
	        int j=1;
        while(j<=n){
            cout<<ch;  
              ch++;  
            j++;
        }
        cout<<"\n";
        i++;
	    }
	}
    /* int j=1;
        while(j<=i){
           char ch='A'+i+j-2;//********
            cout<<ch;  
                  
            j++;
        }
        cout<<"\n";
        i++;
	    }
	}*/