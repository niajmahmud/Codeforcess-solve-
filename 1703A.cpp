#include<bits/stdc++.h>
using namespace std; 
int main(){
    int m;   
    int n;  
    string a; 
    
    cin>>m; 
    while(m>0){ 
  
    cin>>n; 
   
    cin>>a;

    sort(a.begin(), a.end()); 

    int count = 0; 
    for(int i = 0; i < n;i ++){
        if(a[i] == a[i+1]){
            count++; 
        }
        else{
            count = count+2; 
        }
    }
    cout<<count<<endl; 

    m--; }
}