#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n; 
    cin>>n; 

    if(n %2 == 0){
 
        cout<<n/2<<endl;
    }
    else{
     
        cout<<'-'<<(n+1)/2<<endl;
    }
    
    /*
    int n;
    int countp = 0;
    int countn = 0;
    cin >> n;
    int j = 1;
    int i = 2;

    for (; i <= n;)
    {

        countp = countp + i;
        countn = countn + j;

        i = i + 2;
        j = j + 2;
    }

    if (n % 2 == 0)
    {

       

        cout << countp - countn << endl;
    }
    else
    {
        countn = countn + j;
    

        cout << countp - countn << endl;
    }

    */
}