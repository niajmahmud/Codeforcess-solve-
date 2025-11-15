#include<bits/stdc++.h>
using namespace std; 

int main()
{

    int stop; 
    cin>>stop; 

    for(int i = 1; ; i ++){
    int n=0; 
    int power = 1; 
    int count = 0; 
    for(int j = 0; j <= 3; j ++){
        n = n + (i *power);
        cout<<n<<endl; 
     
        if(n == stop){
            cout<<count<<endl; 
          return 0; 
        }
        power *= 10; 
    }


    }
   

}