#include<iostream>
#include<array>
using namespace std;
int main(){
  
array<int,8>ch={1,9,7,5,5,2,0};

cout<<"is empty"<<ch.empty()<<"\n";
cout<<ch.at(3)<<"\n";
cout<<ch.front()<<"\n";
cout<<ch.back()<<"\n";
cout<<ch.size()<<"\n";

for (int i:ch)
{
     cout <<i << " ";
}cout<<"\n";
}