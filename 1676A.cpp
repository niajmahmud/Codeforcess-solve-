#include<bits/stdc++.h>
using namespace std; 

int main(){
int m; 
cin>>m; 
while(m > 0){



    int n, digit; 
    cin>>n; 
    int sum1 = 0; 
    int sum2 = 0; 

    for(int i = 1; n > 0; i ++){
        digit  = n % 10; 
        n = n / 10; 
        if(i <= 3){
            sum1 = sum1 + digit; 
        }
        else{
             sum2 = sum2 + digit;
        }
    }
    
    if(sum1 == sum2){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl; 

    m--; 
}
}