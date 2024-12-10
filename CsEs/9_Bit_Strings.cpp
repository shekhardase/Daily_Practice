#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int main()
{

    int n;
    cin >> n;

    long long ans = 2;
    for (int i = 2; i <= n; i++)
    {
        ans = (ans * 2) % MOD;
    }
    cout << ans % MOD << endl;
}