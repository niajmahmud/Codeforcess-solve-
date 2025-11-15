#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, min; 
    cin>>n; 
    int a[n]; 

    for(int i = 0; i < n; i ++){
        cin>>a[i]; 
        if(a[i] < 0){
            a[i] = -1 * a[i]; 
        }
    }
    min = a[0]; 
    for(int i = 0; i < n ; i ++){
        if(a[i] == 0){
            min = 0; 
            break; 
        }
        if(a[i] < min){
            min = a[i]; 
        }
    }
    cout<<min<<endl; 




}