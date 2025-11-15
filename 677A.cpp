#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, h;
    cin>>n>>h; 
    int p;
    int count = 0; 
    for(int i = 0; i< n; i ++){
        cin>>p; 
        if(p > h){
            count = count + 2; 
        }
        else count++; 

    }
    cout<<count<<endl; 
}