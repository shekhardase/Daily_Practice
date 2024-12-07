#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i = 0;
    long long ans = 0;
    // int j = 0;
    while (i < str.size())
    {
        int j = i;
        while (j < str.size() && str[i] == str[j])
        {
            j++;
        }
        
        ans = max(ans, (long long)j - i + 1);
        i=j;
    }
    cout << ans << " ";

    // int count = 1;
    // int ans = 0;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] == str[i + 1])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count = 1;
    //     }
    //     ans = max(ans, count);
    // }
    // cout << ans;
}
