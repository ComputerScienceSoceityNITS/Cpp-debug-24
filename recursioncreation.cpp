#include<iostream>
using namespace std;

int func(int n);
//create a recursive funtion of the following logic given in the main function.

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 1; 
    for(int i = n ; i  >= 1 ;i--){
        ans = ans * i;   
    }
    cout<<ans<<endl;
}

int func(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*func(n-1);
    }
}