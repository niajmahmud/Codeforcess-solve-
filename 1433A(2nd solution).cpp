#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        int count = 0;
        cin >> n;
        int l;

        l = n % 10;

        count = (l - 1) * 10;

        if (n < 10)
        {
            count = count + 1;
        }
        else if (n < 100)
        {
            count = count + 3;
        }
        else if (n < 1000)
        {
            count = count + 6;
        }
        else if (n < 10000)
        {
            count = count + 10;
        }
        cout << count << endl;
    }
}