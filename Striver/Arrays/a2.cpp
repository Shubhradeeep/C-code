//Array with function
#include<iostream>
#include<array>
using namespace std;

void printarray(int arr[], int n){
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int f[]={1,2,3,4};
printarray(f,2);
cout<<"\n";

 int f2[]={1,2,3,4,8,0,32};
printarray(f2,5);
cout<<"\n";

cout<<"size "<<sizeof(f2)/sizeof(int)<<endl;

int f3[]={1,2,7,0,3,4};
printarray(f3,3);
cout<<"\n";
    //int size= f3.size();   /// can be use in stl
    return 0;
}