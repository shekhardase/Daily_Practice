#include <bits/stdc++.h>
using namespace std;

bool canEatAll(vector<int> &piles, int speed, int h)
{
    int hoursCounted = 0;
    for (int &x : piles)
    {
        hoursCounted += (x / speed);
        if (x % speed != 0)
        {
            hoursCounted++;
        }
    }
    return hoursCounted <= h;
}

int main()
{

    // koko eating bananas
    // just check if she can eat or not
    // if it is possible valid (in range between h then we must also check for optimal answer)
    int h = 8;
    vector<int> piles = {3, 6, 7, 11};

    int low = 1;
    int high = *max_element(begin(piles), end(piles));

    // int speed = (high - low) / 2;

    while (low < high)
    {
        int speed = low + (high - low) / 2;

        if (canEatAll(piles, speed, h))
        {
            high = speed;
        }
        else
        {
            low = speed + 1;
        }
    }
    cout << low << endl;
    return 0;
}