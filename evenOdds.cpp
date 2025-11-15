#include<iostream>

using namespace std; 
int main(){
    int n, k, ol = 0, el = 0;
    cin>>n;
    int arr[n], odd[n/2], even[n/2];  

    for(int i = 1; i <= n; i ++){
        arr[i-1] = i; 

        if(arr[i-1]%2 == 1){
            odd[i-1] = arr[i-1];
            ol++; 
            
        }
        else{
            even[i-1] = arr[i-1]; 
            el++;
        }
    }
    for(int i = 0; i < ol; i ++){
        cout<<odd[i]<<" "; 
    } 

}