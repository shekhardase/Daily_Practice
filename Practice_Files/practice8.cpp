#include <bits/stdc++.h>

using namespace std;

bool canEat(int banana, int ans, int hour, int count)
{
    while (banana > 0)
    {
        banana = banana - ans;
        // cout<<banana<<" ";
        count++;
        // cout<<"this is count "<<count<<endl;
        if (count > hour)
        {
            cout<<"Fk  u ";
            return false;
        }
    }
    cout<<"possible"<< " ";
    cout<<count<<endl;
    return true;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int hour = 8;
    int ans = 3;
    int count = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        canEat(piles[i], ans, hour, count);
    }
    return 0;
}