#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n, div = 0;
    cin>>n; 

    while(n > 0){
        if(n >= 100){
            div = div + n / 100; 
            n = n % 100; 
        }
        if(n >= 20){
            div = div + n / 20; 
            n = n % 20; 
        }
        if(n >= 10){
            div = div + n / 10; 
            n = n % 10; 
        }
        if(n >= 5){
            div = div + n / 5; 
            n = n % 5; 
        }
        if(n >= 1){
            div = div + n / 1; 
            n = n % 1; 
        }
    }
    cout<<div<<endl; 
}