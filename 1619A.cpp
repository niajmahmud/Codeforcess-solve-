#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool status;
    string a;
    int n, t;

    cin>>t; 
    while(t--){
status = false; 
    cin >> a;
    n = a.length();

    if (n % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < (n / 2); i++)
        {
            
            if (a[i] == a[n/2 + i])
            {
                status = true;
            }
            else
            {
                status = false; 
                break;
            }
        }
        if (status)
            cout << "YES" << endl;
        else
            cout << "NO"<<endl;
    }


    }

}