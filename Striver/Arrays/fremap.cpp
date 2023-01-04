#include<bits/stdc++.h> 
using namespace std;
 bool fri(int arr[],int size) {

  	unordered_map<int, int> m;
		unordered_set<int> s;
		 for(int i=0;i<size;i++){   
            m[arr[i]]++;}

         for (auto it : m) {
		if (s.count(it.second))
			return false;
		else
          s.insert(it.second);
			
	}
	return true;
        }

  int main(){
    
    
int size=6;
int arr[6]={1,2,2,9,3,3};
bool result=fri(arr,size);

// Print the result
	if (result)
		cout <<"\n"<< "True"<<"\n";
	else
		cout<<"\n" << "False" <<"\n";
	return 0;


}
