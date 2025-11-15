#include<bits/stdc++.h>
using namespace std; 
int main()
{

    int m, a[4]; 

    cin>>m; 

    while(m > 0){
        int count = 0; 

        for(int i = 0; i < 4; i ++){
            cin>>a[i];
        }
        int b = a[0]; 

        for(int i = 1; i < 4; i ++){
            if(b < a[i]){
                count++; 
            }
        }
        cout<<count<<endl; 




        m--; 
    }
}