#include<iostream>
using namespace std;

int main(){
    int n, m;
    int x = 1, y = 1, money= 0; 

    cin>>n; 
    cin>>m;
    
    if(x == 1 || y == 1){
        money = 1; 
    }
    else{
         while(y < m){
        y++; 
    }
    money = x + y; 
    }
    
   

    cout<<money; 

    return 0; 

}