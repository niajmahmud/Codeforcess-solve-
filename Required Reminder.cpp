#include<iostream>
using namespace std;

int main(){

    int x, y, n, m, result; 

cin>>m; 
for(int i = 1; i <= m; i ++){
    cin>>x; 
    cin>>y; 
    cin>>n; 

    result = (n-y)/x; 
    result = result * x + y; 
    
    cout<<result<<endl; 
    
}
    
}