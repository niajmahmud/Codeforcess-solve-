#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, m, a, b; 
    cin>>n >>m >> a >> b; 

    int s1, s2, bs; 

    
        s1 = n * a; 
        if(n % m == 0){
            s2 = (n / m) * b; 
        }
        else{
            bs = n% m; 
            s2 = (bs * a) + ((n/m)* b);
            
        }
    
        if(s1 > s2){
            cout<<s2<<endl; 
        }
        else cout<<s1<<endl; 
}