#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x;
        long long y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                long long ans = x * x;
                ans = ans - (y - 1);
                cout << ans;
            }
            else
            {
                long long ans = (x - 1) * (x - 1) + 1;
                ans = ans + (y - 1);
                cout << ans;
            }
        }
        else
        {
            if (y % 2 == 1)
            {
                long long ans = y * y;
                ans = ans - (x - 1);
                cout << ans;
            }
            else
            {
                long long ans = (y - 1) * (y - 1) + 1;
                ans = ans + (x - 1);
                cout << ans;
            }
        }
        cout << endl;
    }
}