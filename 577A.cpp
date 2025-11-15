#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n, x; 
    cin>>n; 
    cin>>x; 
    int count; 
    if(x == 1){
        count = 1; 
        cout<<count<<endl; 
    }
    else if(n*n < x){
        cout<<0<<endl; 
    }
    else{
        count = 0; 
for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            if(i*j == x){
                count= count + 1; 
               
            }
        }
    }

    cout<<count<<endl; 

    }
    
}