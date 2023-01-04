#include <bits/stdc++.h>
using namespace std;
//digit in reverse order
void reverse(int num){
    int rev=0;
    //reverse
    while(num!=0){
       int r= num%10;
       rev=rev*10+r;
        num/=10;
}
cout<<"REVERSE  "<<rev<<"\n";

}
//for digit
void digit(int numb){
    int r=0,count=0,arr[10],i=0,j;
        while(numb!=0){
            
       int r= numb%10;
        arr[i]=r; i++;
        numb/=10;
        
        count++;
        }
       for(j=i-1;j>-1;j--){
           cout<<arr[j];
       }
        cout<<"\n"<<"DIGITS PRESENT="<<count<<"\n";
    
}
int main()
{
        int num,r=0,count=0,arr[10];
     cout<<"INPUT ";   cin>>num;
        reverse(num);
        digit(num);

        while(num!=0){
       int r= num%10;
       if(r!=0 && num%r==0){
        num/=10;
        count++;}
        
        }
       
        cout<<"IF DIVIDED COUNT="<<count<<"\n";
        
    }