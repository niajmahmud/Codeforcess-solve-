#include<iostream>
using namespace std; 

int main(){
    int a, b, c, n;
    cin>>n; 
    for(int i = 1; i <= n; i ++){
         cin>>a; 
    cin>>b;
    cin>>c; 
    if(a == b){
        cout<<c<<endl; 
    }
    else if(b == c){
        cout<< a<<endl; 
    }
    else{
        cout<< b<<endl; 
    }
    }
   
}