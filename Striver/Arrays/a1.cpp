//We can initialize the array with any value by using the fill_n command 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];

    //To initialize the array with value'1'.
    fill_n(arr, 10, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << arr[i] << " ";
    }
    cout<<"\n";
    for (int i:arr)
{
     cout <<i << " ";
}cout<<"\n";
}