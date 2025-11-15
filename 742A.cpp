#include<iostream>
using namespace std; 

int main(){
    int n,a;
    int l = 8; 
    int c = 4;  
    int ans = 1; 

    cin>>n; 

    if(n == 0) cout<<1<<endl; 
    else{


int r = n % c; 

    if(r == 0){
        if(l == 2  || l == 4 || l == 6 || l == 8){
            cout<<6<<endl; 
        }
        else if(l == 3 || l == 7 || l == 9){
            cout<<0<<endl; 
        }
        
    }
    else{
       
        for(int i = 1; i <= r; i ++){
            ans = ans * l; 
        }

        a = ans%10;
        cout<<a<<endl;

        }




    }
    
  
}