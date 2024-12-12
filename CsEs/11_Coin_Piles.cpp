// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;

        long long maxi = max(a, b);
        long long mini = min(a, b);

        if ((a + b) % 3 == 0 && 2*mini >= maxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
