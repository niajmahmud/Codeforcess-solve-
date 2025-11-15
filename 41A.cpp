#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b; 
    cin>>a;
    cin>>b;
    int n = a.length();
    int m= b.length(); 
    if(n != m){
        cout<<"NO"<<endl;
        return 0; 
    } 
    bool status = true;
   
    for(int i = 0;i < n; i ++){
        if(a[i] == b[n - (i+1)]){
            status = true; 
        }
        else{
            
           status = false;  
           break;
        } 
     
    }

    if(status == true) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl; 

}