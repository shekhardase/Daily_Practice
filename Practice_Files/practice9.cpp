#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hour = 5;
    vector<int> piles = {3, 6, 7, 11};

    int speed = 6;
    int count = 0;

    for (int i = 0; i < piles.size(); i++)
    {
        while (piles[i] > 0)
        {
            piles[i] = piles[i] - speed;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
