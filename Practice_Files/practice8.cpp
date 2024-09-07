#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour = 8;
    vector<int> piles = {3, 6, 7, 11};
    // cout << ;
    // int speed = 6;
    int count = 0;

    for (int j = 1; j < piles[piles.size() - 1]; j++)
    {
        for (int i = 0; i < piles.size(); i++)
        {
            while (piles[i] > 0)
            {
                piles[i] = piles[i] - j;
                count++;
            }
            if (count > hour)
            {
                count = 0;
            }

            cout << count << endl;
        }
    }
}
