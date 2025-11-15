#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    int l, start, end; 
    
    cin>>n; 

    while(n > 0){
        cin>>l; 
        char a[l]; 

        for(int i = 0; i< l; i++){
            cin>>a[i]; 
        }



        for(int i = 0; i < l; i ++){
            if(a[i] == 'B'){
                start = i; 
                break;
            }
        }

        for(int j = l-1; j >= 0;  j --){
            if(a[j] == 'B'){
                end = j; 
                break;
            }
        }
        cout<< end - start + 1<<endl; 
        n--; 
    }
}