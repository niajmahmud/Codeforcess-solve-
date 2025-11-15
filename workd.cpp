#include<iostream>
#include<string> 

using namespace std; 
int main()
{
    int n, upper = 0, lower = 0; 
    string s; 
    cin>>s; 
    n = s.length(); 

    for(int i = 0; i<n; i ++){
        if(s[i] <= 90 && s[i] >= 65){
            upper++; 
        }
        else{
            lower++; 
        }
    }

    if(upper>lower){
        for(int i = 0; i < n; i++){
            if(s[i] <= 122 && s[i] >= 97){
                s[i] = s[i] - 32; 
            }
        }
    }
    else if(lower >= upper){
        for(int i = 0; i < n; i ++){
            if(s[i] <= 90 && s[i] >= 65){
                s[i] = s[i] + 32; 
            }
        }
    } 
    cout<<s;
      
}