#include <iostream>
	using namespace std;
	int main() {
	    int n;
       // int count=1;
	    cin>>n;
	    int i=1;
	    while(i<=n){
	        int j=i;
        while(j<=n){
			 if(i==1 || i==n || j==n || j==i)
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