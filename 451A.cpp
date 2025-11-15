#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n, m; 
    cin>>n;
    cin>>m;  
    int mul = n*m; 
    if(mul % 2 == 0){
        cout<<"Malvika"<<endl; 
    }
    else if(mul % 2 == 1){
        cout<<"Akshat"<<endl; 
    }

}