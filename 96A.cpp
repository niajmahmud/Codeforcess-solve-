#include<bits/stdc++.h>
using namespace std; 
int main(){

    string a; 
    cin>>a; 
    int n = a.length();
    int count1 = 0, count0 = 0; 

    bool value = false; 
    for(int i = 0; i  <n; i++){
     
        if(a[i] == 0){
           
            count1 = 0; 
            count0++;
            if(count0 >= 7){
                value = true; 
                break;
            }
        }
     
        if(a[i] == 1){
            
            count0 = 0; 
            count1++; 
            if(count1 >= 7){
                value = true; 
                break;
            }
        }
    }
    if(value){
        cout<<"YES";
    }else cout<<"NO"; 
    
}