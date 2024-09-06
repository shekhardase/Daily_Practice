#include <bits/stdc++.h>

using namespace std;

bool canEat(int banana, int ans, int hour, int &count)
{
    while (banana > 0)
    {
        banana = banana - ans;
        // cout<<banana<<" ";
        count++;
        // cout << count << endl;
        if (count > hour)
        {

            return false;
            break;
        }
    }

    cout << "possible" << " ";
    // cout<<count<<endl;
    return true;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int hour = 8;
    int ans = 0;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        ans = i;
        for (int j = 0; j < piles.size(); j++)
        {
            if (canEat(piles[j], ans, hour, count))
            {
                cout << ans << endl;
            }
        }
    }

    return 0;
}