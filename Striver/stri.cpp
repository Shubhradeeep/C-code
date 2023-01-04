 #include<bits/stdc++.h>  
using namespace std;
bool isPalindrome(string s) {
       
       s.erase(remove(s.begin(),s.end(),' '),s.end());
        s.erase(remove(s.begin(),s.end(),','),s.end());
         transform(s.begin(),s.end(),s.begin(),::tolower);
          string st=s;
          cout<<st<<"\n";
         reverse(s.begin(),s.end());
         cout<<s<<"\n";
         if(st==s)
        return true;
        else false;
        }
    int main(){
                    //"A man, a plan, a canal Panama";
string s="A man, a Plan,nalpanama" ;
    cout<<isPalindrome(s);

}
    