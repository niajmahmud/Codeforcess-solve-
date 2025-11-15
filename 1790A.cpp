#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i; 
int t; cin>>t;
while(t--){

 string pi = "314159265358979323846264338327"; 
    string in; 
    cin>>in; 
    int n = in.length();
   
    
    for( i = 0; i  < n; i ++){
        if(in[i] != pi[i]){
            break;
        }
    }
cout<<i<<endl; 
    

}

   

}