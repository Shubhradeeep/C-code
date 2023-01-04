#include<iostream>
#include<vector>
using namespace std;
int main(){
  
vector<int>ch;
int element;    cin>>element;
cout<<"is empty"<<ch.empty()<<"\n";
// cout<<ch.front()<<"\n";
// cout<<ch.back()<<"\n";
 cout<<ch.size()<<"\n";


ch.push_back(4);
cout<<"CAPACITY "<<ch.capacity()<<"\n";

ch.push_back(90);
cout<<"CAPACITY "<<ch.capacity()<<"\n";

ch.push_back(67);
cout<<"SIZE "<<ch.size()<<"\n";
cout<<"CAPACITY "<<ch.capacity()<<"\n";

ch.push_back(element);
cout<<ch.at(3)<<"\n";
cout<<"SIZE "<<ch.size()<<"\n";
cout<<"CAPACITY "<<ch.capacity()<<"\n";

ch.push_back(98);
cout<<ch.at(4)<<"\n";
cout<<"SIZE "<<ch.size()<<"\n";
cout<<"CAPACITY "<<ch.capacity()<<"\n";

for (int i:ch)
{
     cout <<i << " ";
}
cout<<"\n";
cout<<ch.back()<<"\n";
cout<<"SIZE "<<ch.size()<<"\n";
ch.pop_back();
for (int i:ch)
{
     cout <<i << " ";
}cout<<"\n";
cout<<ch.back()<<"\n";
cout<<"SIZE "<<ch.size()<<"\n";

vector<int>v(ch);
for (int i:v)
{
     cout <<i << " ";
}cout<<"\n";

ch.clear();
cout<<"SIZE "<<ch.size()<<"\n";


}