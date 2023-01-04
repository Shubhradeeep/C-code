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
			  printf(" ");
            j++;
        }
        int k=1;
        while(k<=i){
			   if(i==1 || i==n || k==1 || k==i)
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