// https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2025-02-20

#include <bits/stdc++.h>
using namespace std;

void generateall(string &s, int n, int index, map<string, int> &mp, string &result, bool &found)
{
    if (n == index)
    {
        if (mp.find(s) == mp.end())
        {
            result = s;
            found = true;
        }
        return;
    }

    if (!found)
    {
        s[index] = '0';
        generateall(s, n, index + 1, mp, result, found);
    }

    if (!found)
    {
        s[index] = '1';
        generateall(s, n, index + 1, mp, result, found);
    }
}

string findUniqueBinaryString(vector<string>& nums) {
    map<string, int> mp;
    int n = nums[0].size();

    for (auto i : nums)
    {
        mp[i]++;
    }

    string result;
    string s(n, '0');

    bool found = false;
    generateall(s, n, 0, mp, result, found);

    return result;
}

int main()
{
    vector<string> nums = {"01", "10"};

    string uniquestring = findUniqueBinaryString(nums);

    cout << uniquestring << endl;
}
