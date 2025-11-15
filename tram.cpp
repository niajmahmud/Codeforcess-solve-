#include<iostream>
using namespace std; 

int main(){
    int n, a = 0, b = 0; 
    int cap = 0, onb = 0; 
    cin>>n; 

    for(int i = 1; i <= n; i ++){
        cin>>a; 
        cin>>b; 
        cap = (cap - a) + b; 
        if(cap > onb){
            onb = cap; 
        }

    }
    cout<<onb<<endl; 
}