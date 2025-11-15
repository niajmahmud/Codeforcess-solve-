#include<bits/stdc++.h>
using namespace std; 

int main(){

    int a[3];
    int t, m; 

    cin>>t; 

    while(t--){
        cin>>a[0] >> a[1]>> a[2]; 
        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[0]){
            for(int i = 0; i < 3; i ++){
                cout<<a[i] + 1<<' ';
            }
            cout<<endl; 
          
        }
        else{

m = max({a[0], a[1], a[2]}); 
        
        for(int i = 0; i < 3; i++){
            
           if(a[i] < m){
            cout<< m -a[i] + 1<<' ';
           }
           else if(a[0] == a[1] || a[1] == a[2]){
                cout<<m-a[i] + 1<<' '; 
           }
           else if(a[i] == m){
            cout<<m - a[i]; 
           }
          
           

            
           
        }
        cout<<endl; 

        }
        

    }
}