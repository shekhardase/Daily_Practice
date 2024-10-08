#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unordered_map<int, int> mp;
    unordered_map<string, int> mp;

    mp["Shekhar"] = 10;
    mp["Dase"] = 100;
    mp["Leetcode"] = 1000;

    for (auto x : mp)

    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    string key = "Shekhar";

    if (mp.find(key) != mp.end())
    {
        cout << "Key found" << endl;
    }

    else
    {
        cout << "No found " << endl;
    }
    cout << endl;
    if (mp.find(key) != mp.end())
    {
        auto temp = mp.find(key);
        cout << "key is: " << temp->first << endl;
        cout << "Value is " << temp->second << endl;
    }

    mp.insert(make_pair("Mobile", 199999));

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    unordered_map<int, int> newmp;

    vector<int> arr = {1, 2, 3, 4, 2, 12, 1, 23, 2, 1, 2, 1, 2, 1, 2, 2, 3, 12, 1, 2, 3, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 32, 3, 3, 3};

    for (int i = 0; i < arr.size(); i++)
    {
        int key = arr[i];
        // mp[key]++;
        newmp[key]++;
    }

    for (auto it : newmp)
    {
        cout << it.first << " " << it.second << endl;
    }
}
