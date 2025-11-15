#include<bits/stdc++.h>
using namespace std; 

int main(){

    string a; 
    int n; cin>>n; 
    cin>>a; 
    
    int ant = 0, dan = 0;  

    for(int i = 0; i < n; i ++){

        if(a[i] == 'A'){
            ant++; 
        }
        else dan++; 
    }

    if(ant > dan ){
        cout<<"Anton"<<endl; 
    }
    else if(dan > ant){
        cout<<"Danik"<<endl; 
    }
    else cout<<"Friendship"<<endl; 
}