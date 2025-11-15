#include<bits/stdc++.h>
using namespace std; 
int main(){

    int a[3]; 
    int m; 
    cin>>m; 
    while(m--){

for(int i = 0; i < 3; i ++){
        cin>>a[i]; 
    }
    if(a[1]+a[2] >= 10 || a[0] + a[1] >= 10 || a[0] + a[2] >=10){
        cout<<"YES"<<endl; 
    }
    else cout<<"NO"<<endl; 
    

    }
  
    


}