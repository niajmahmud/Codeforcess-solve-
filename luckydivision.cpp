//didnt work
#include<iostream>
using namespace std;

int main(){
    int n, j, digit, newnum; 
    bool status = true, lucky; 
    cin>>n; 
    for(int i = 4; ; i ++){
        j = i ; 

        while (j > 0){
            digit = j % 10; 
            j = j / 10;
            if(digit == 4 || digit == 7){
                status = true; 
            }
            else{
                status = false;
                break;  
            }

        }

        if(status = true){
            if(n % i == 0){
                cout<<"YES"; 
                break; 
            }
            else{
                cout<<"NO";
                break; 
            }
        }
    }
}