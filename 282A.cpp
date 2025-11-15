#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n; 

    string s; 
    int count = 0; 

    while(n > 0){
        cin>>s; 
        for(int i =0 ; i< 3; i ++){
            if(s[i] == '+' &&s[i+1] == '+'){
                count++; 
                
            }
            if(s[i] == '-'&&s[i+1] == '-'){
                count--; 
                 
            }
        }
         
      n--; 
    }
    cout<<count<<endl;
  

}