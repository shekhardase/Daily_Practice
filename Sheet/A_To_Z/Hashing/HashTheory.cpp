// // https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course/

// TO DO :

// Given two arrays nums and queries
// Return the frequency of queries[i] in nums

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 3, 4, 5, 1, 2, 3, 5, 1, 2, 3, 4, 5};
    vector<int> queries = {0, 1, 2, 4, 5};
    cout << "Hell0 World" << endl;

    map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    for (auto i : queries)
    {
        if (mp[i] != 0)
        {
            cout << mp[i] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
