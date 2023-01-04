#include <iostream>
	using namespace std;
	int main() {
	    int n;
       // int count=1;
	    cin>>n;
	    int i=1;
	    while(i<=n){
	        int j=1;
        while(j<=i){
			 if(i==1 || i==n || j==1 || j==i)
            {
                /* Print star for 1st, Nth row and column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
         
            j++;
        }
        cout<<"\n";
        i++;
	    }
	}