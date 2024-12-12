#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.size();

    unordered_map<char, int> mp;

    for (auto i : s)
    {
        mp[i]++;
    }
    int count = 0;

    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            count++;
        }
    }

    if (count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<char> ans(n);
    int left = 0;
    int right = s.size() - 1;
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
        {
            while (i.second != 0)
            {
                ans[left] = i.first;
                i.second--;
                left++;

                ans[right] = i.first;
                i.second--;
                right--;
            }
        }
    }
    // cout << n;
    // return 0;

    // int left = 0;

    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            while (i.second != 0)
            {
                ans[left] = i.first;
                i.second--;
                left++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
}