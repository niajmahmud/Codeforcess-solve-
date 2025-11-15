#include<bits/stdc++.h>
using namespace std; 
int main()
{

    int m; 
    cin>>m; 
    while(m > 0){


        int n; 
    int a, b; 
    int winner;
    int highest = 0; 

    cin>>n; 
    for(int i = 0; i < n; i ++){
        cin>>a; 
        cin>>b;
        if(b >= highest && a <= 10){
            highest = b; 
            winner = i + 1;
        }
        
    }
    cout<<winner<<endl; 

        m--; 
    }
    
}