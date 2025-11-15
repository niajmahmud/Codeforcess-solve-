#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int a, b; 
    int n; 
    cin>>n; 
    while(n > 0){
cin>>a>>b; 
    
    int sum = a*1 + b*2; 
    if(a == 0){
        if(a % 2 ==0)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;     
    }
    else if(b == 0){
        if(b % 2 == 0) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl; 
    }
    else if(sum % 2 == 0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl; 
    }
        n--;    

}