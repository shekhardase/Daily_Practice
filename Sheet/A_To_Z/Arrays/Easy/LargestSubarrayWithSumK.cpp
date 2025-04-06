#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    unordered_map<int, int> mp;
    int prefix = 0;
    int sum = 0;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += ans[i];
        if (prefix == k)
        {
            length = max(length, i + 1);
        }

        int rem = prefix - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            length = max(length, len);
        }
        if (mp.find(rem) == mp.end())
        {
            mp[prefix] = i;
        }
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << length << endl;
}
