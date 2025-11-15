#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 

    while(t--){
int n; 
    cin>>n; 
    int j = n-1; 
    int count = 0; 
    for(int i = 1; i < n; i ++){
        if(i + j == n){
            count++; 
        }
        j--;
    }
    cout<<count<<endl; 

    }

    
}