#include<bits/stdc++.h>
using namespace std; 

int main(){

    int m; 
    cin>>m; 

    int a, b, min, temp; 

    while(m > 0){
        cin>>a; 
        cin>>b; 
        min = 100; 
        for(int c = a;c <= b;c++ ){
            temp = (c-a)+(b-c);
            if(min > temp){
                min = temp; 
            } 
        }
        cout<<min<<endl; 
        
        m--; 
    }

}