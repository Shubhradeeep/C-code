#include<bits/stdc++.h>  
using namespace std;

string is_palindrome(int n)
		{
		    // Code here.
		    string s = to_string(n) ;
		    string x=s ;
		    reverse(s.begin(),s.end()) ;
		    if(s==x){
		        return "Yes" ;
		    }
		    else{
		        return "No" ;
		    }
        	}
    int main(){
     int n;
     cout<<"ENTER INPUT  ";
     cin>>n;
     cout<<is_palindrome(n);
                }

             