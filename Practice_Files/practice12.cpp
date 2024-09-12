#include <bits/stdc++.h>
using namespace std;

// min days to make n boq of k adjcenet flowers
int main()
{
    // let array be
    vector<int> flowers = {7, 7, 7, 7, 13, 11, 12, 7};

    int k = 3;
    int m = 2;

    // day 7
    for (int i = 0; i < flowers.size(); i++)
    {
        if (flowers[i] <= 7)
        {
            flowers[i] = 1;
        }
    }

    for (int i : flowers)
    {
        cout << i << " ";
    }

    // check if bqs are possible or not

    cout << endl;
    // day 12
    for (int i = 0; i < flowers.size(); i++)
    {
        if (flowers[i] <= 12)
        {
            flowers[i] = 1;
        }
    }

    for (int i : flowers)
    {
        cout << i << " ";
    }

    int count = 0;
    int maincount = 0;
    for (int i = 0; i < flowers.size(); i++)
    {
        if (flowers[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == k)
        {
            maincount++;
        }
    }
    cout << endl;
    cout << "ans" << endl;
    cout << maincount << endl;

    // now somehow we have to automate this process
}