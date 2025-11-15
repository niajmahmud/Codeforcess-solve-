#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, c;
     
    cin >>n; 
    int a[n];
    cin >>c; 
    int coin = 0; 
    //didnt work

    for(int i = 0; i < n; i ++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i ++){

        if(a[i] > c){
            coin = coin + 1; 
        }
        for(int j = i + 1; j < n; j++){
            a[j] = a[j] * 2; 
        }
    }
    cout<<coin<<endl; 
}