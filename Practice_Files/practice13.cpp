#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> flowers = {7, 7, 7, 7, 13, 11, 12, 7};

    int k = 3;
    int m = 2;

    // make days from min array to max array

    for (int day = *min_element(flowers.begin(), flowers.end()); day < *max_element(flowers.begin(), flowers.end()); day++)
    {
        for (int i = 0; i < flowers.size(); i++)
        {
            if (flowers[i] <= day)
            {
                flowers[i] = 1;
            }
        }

        int count = 0;
        int maincount = 0;
        int ans = 0;
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

            if (maincount = m)
            {
                ans = day;
            }
        }
        cout << endl;
        cout << "ans" << endl;
        cout << maincount << endl;
        cout << "____________" << endl;
        cout << ans << "Tis is ans" << endl;
    }
}