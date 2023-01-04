#include<bits/stdc++.h> 
using namespace std;
         string fri(int arr[], int size){

                                unordered_map<int,int>f;
                                vector<int>v;
                               for(int i=0;i<size;i++){   
                                   f[arr[i]]++;
                               }
for(auto k:f){
cout<<k.first<<" "<<k.second<<" \n";
v.push_back(k.second);}//cout<<"\n";
                                            cout<<"FREQUENCY ";
                                            for(auto  k:v){
                                               cout<<k<<" ";
                                           }cout<<"\n";
for(int g=0;g<v.size();g++){
    for(int h=g+1;h<v.size();h++){
    if(v[g]==v[h] ){
       return "False";} 
   else return "True";
    }}}

                                         int main(){
    
    
                                               int size=6;
int arr[6]={1,2,2,3,3,3};
                                                // cin>>size;
                                                //   for (int i = 0; i < size; i++)  
                                                // {
                                                //     cin >> arr[i];  
                                                // }  
    
                                              cout<<fri(arr,size);
                                               }




// bool uniqueOccurrences(vector<int>& arr) {
//   	unordered_map<int, int> numCnt;
	// 	unordered_set<int> st;
	// 	for (int num : arr) ++numCnt[num];
	// 	for (auto &a : numCnt) {
	// 		if (st.count(a.second)) return false;
	// 		st.insert(a.second);
	// 	}
	// 	return true;
    // }
//     };