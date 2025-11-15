#include<bits/stdc++.h>
using namespace std; 

int main(){


    int x, y , max; 
    cin>>x >>y;
    if(x > y) max = x;
    else max = y;
    int count = 0; 

    for(int i = max; i <= 6; i++){
        count++; 
    }
   
    if(count == 0)cout<<"0/1"<<endl; 
    else if(count == 6)cout<<"1/1"<<endl; 

    else if(count % 2 == 0){
        cout<<count/2<<'/'<<6/2<<endl;
    }
    else if(count % 3 == 0){
        cout<<count/3<<'/'<<6/3<<endl;
    }
    else cout<< count <<'/'<<6<<endl; 


}