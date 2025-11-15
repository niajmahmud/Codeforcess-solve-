#include<bits/stdc++.h>
using namespace std; 
int i = 0;
void printNumbers(int n) {

    if(n < 1){
        return; 
    }
        i++; 
        cout<<i<<endl; 

        
        printNumbers(n-1); 
        
    }
int main(){

    int n; cin>>n; 
    printNumbers(n);

}

