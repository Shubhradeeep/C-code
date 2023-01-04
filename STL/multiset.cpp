#include <bits/stdc++.h>
using namespace std;

int main()
{
     // Initialise the multiset
	multiset<int>muset;
    muset.insert(8); muset.insert(9); muset.insert(5); muset.insert(1);    muset.insert(4);
    muset.insert(6); muset.insert(2);  muset.insert(10);
    muset.insert(1);

	cout<<"BEFORE ";
    for (auto i:muset) {
		cout<<i<<" ";
	}
    cout<<"\n";
    cout<<"AFTER  ";
    multiset<int>::iterator it=muset.find(5);   //set it
   // it++;
    muset.erase(it);
    for (auto it:muset) {
		cout<<it<<" ";
	}
    cout<<"\n";
    cout<<"AFTER  range ";
    
    it=muset.find(6);
    muset.erase(it,muset.find(9)); // before 9 will be erase
    for (auto it:muset) {
		cout<<it<<" ";
	}
    cout<<"\n";
   cout<<"is available  "<< muset.count(10)<<"\n";
    cout<<"iterator is "<<*it<<"\n";
    multiset<int>::iterator itr=muset.find(1);
    cout<<"iterator is "<<*itr<<"\n";
    for(auto it=itr; it!=muset.end(); it++){
        cout<<*it<<" ";
    }
	return 0;
}