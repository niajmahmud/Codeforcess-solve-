#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, t; 
    int div;
    cin>>m; 

    while(m > 0){
        cin>>t; 
        if(t >= 1900){
            div = 1; 
        }
        else if(t >= 1600 && t <= 1899){
            div = 2; 
        }
        else if(t >= 1400 && t <= 1599){
            div = 3; 
        }
        else if(t <= 1399){
            div = 4; 
        }
        cout<<"Division "<<div<<endl; 


        m--; 
    }
}