#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        ch+=32;
        cout<<"This is uppercase & converted to lower case\n"<<ch;

    }
    else if(ch >= 'a' && ch <= 'z'){
        ch-=32;
        cout<<"This is Lowercase & converted into uppercase\n"<<ch;
        
    }
    else{
        cout<<"This is neumeric\n"<<ch;
    }


}