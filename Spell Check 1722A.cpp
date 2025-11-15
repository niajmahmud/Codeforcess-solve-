#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,m;
   // TO COMPARE SCRAMBLED STRINGS FIRST SORT THEMIN ORDER****; 
    string name;
    string a = "Timur";
    sort(a.begin(), a.end()); 

    cin>>m; 
    while(m--){
        cin>>n; 
        cin>>name;

        sort(name.begin(), name.end()); 

       if(n != 5){
        cout<<"NO"<<endl; 
        continue; 
       }

        if(name == a ){
        cout<<"YES"<<endl; 
       }
       else {
        cout<<"NO"<<endl;
       }

        
    }
   
   
 
}