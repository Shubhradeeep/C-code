#include<iostream>  
using namespace std; 
int factorial(int k,int n)  
{ 
if(n==0)  
return(1);
return (k*factorial(k,n-1));      
}  
int main()  
{
int n,k;  
cout<<"Enter any number: ";  
cin>>k>>n;  
cout<<k<<"^"<<n<<"= "<<factorial(k,n);
return 0;  
}  
