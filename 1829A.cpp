#include<bits/stdc++.h>
using namespace std; 
int main(){

    string o = "codeforces"; 
    char c; 
    int t; 
    cin>>t; 
    while(t--){
  int count = 0; 
    for(int i = 0;  i < 10; i ++){
        cin>>c; 
        if(o[i] != c){
            count++; 
        }
    }
    cout<<count<<endl; 


    }
  
}