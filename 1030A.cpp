#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    
    cin>>n; 
    int v[n]; 
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }

    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            cout<<"HARD"<<endl;
            return 0; 
        }
    }
    cout<<"EASY"<<endl;
    
}