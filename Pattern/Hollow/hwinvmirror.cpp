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
			  printf(" ");
            j++;
        }
        int k=i;
        while(k<=n){
			   if(i==1 || i==n || k==n || k==i)
            {
                /* Print star for 1st, Nth row and column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
            k++;
        }
        cout<<"\n";
        i++;
	    }
	}