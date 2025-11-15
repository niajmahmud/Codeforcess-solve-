#include<bits/stdc++.h>
using namespace std;

int main(){

    string a; 
 

    cin>>a; 
    int n = a.length();

    for(int i = 0; i < n; i ++){
      if(a[i]=='y' ||a[i] == 'Y'||a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
        continue;
    }
    else{
        cout<<'.'; 
        if(a[i] >= 65 && a[i] <= 90){
            a[i] = a[i] + 32; 
              }
              cout<<a[i]; 
    }
 
}
cout<<endl; 
}