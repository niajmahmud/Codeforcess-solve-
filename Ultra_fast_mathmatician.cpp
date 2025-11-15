#include<bits/stdc++.h>

using namespace std;

int main(){
   int x, n = 0; 
    vector<int> a; 
    vector<int> b; 
    int c[100]; 

    while(cin>> x){
        a.push_back(x);
        n++; 
    }

    while(cin>> x){
        b.push_back(x); 
    }
    

    for(int i = 0; i < n; i ++){
        if(a[i] == b[i]){
            c[i] = 0; 
        }
        else{
            c[i] = 1; 
        }
    }

    for(int i = 0; i < n; i ++){
        cout<<c[i]; 
    } 
    cout<<endl;
}