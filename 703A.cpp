#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c; 
    cin>>n; 
    int countm = 0, countc =0; 
    while(n--){
        
        cin>>m>>c;
        
        if(c>m){
            countc++;
        }
        else if(m>c){
            countm++; 
        }      
}
if(countm > countc){
    cout<<"Mishka"<<endl;
}
else if(countc > countm){
    cout<<"Chris"<<endl;
}
else cout<<"Friendship is magic!^^";

 }
    