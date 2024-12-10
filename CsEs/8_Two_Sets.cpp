#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = (long long)(n * (n + 1)) / 2;
    vector<int> v1, v2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        if (n % 2)
        {
            v1.push_back(n--);
            for (int i = 1; i <= (n) / 2; i += 2)
            {
                v2.push_back(i);
                v2.push_back(n - (i - 1));
            }
            for (int i = 2; i < n / 2; i += 2)
            {
                v1.push_back(i);
                v1.push_back(n - (i - 1));
            }
        }
        else
        {
            for (int i = 1; i < n / 2; i += 2)
            {
                v1.push_back(i);
                v1.push_back(n - (i - 1));
            }
            for (int i = 2; i <= n / 2; i += 2)
            {
                v2.push_back(i);
                v2.push_back(n - (i - 1));
            }
        }
    }
    cout << v1.size() << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
}