#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int distance, int cows)
{
    int countcows = 1;
    int last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= distance)
        {
            countcows++;
            last = stalls[i];
        }
        if (countcows >= cows)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int n = stalls.size();
    int cows = 4;
    sort(stalls.begin(), stalls.end());
    int limit = stalls[n - 1] - stalls[0];
    int best = 0;
    for (int distance = 1; distance <= limit; distance++)
    {
        if (isPossible(stalls, distance, cows))
        {
            // cout << distance - 1;
            best = distance;
        }
    }

    int low = 1;
    int high = stalls[n - 1] - stalls[0];
    int mid = high - (high - low) / 2;

    while (low <= high)
    {
        if (isPossible(stalls, mid, cows))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = high - (high - low) / 2;
    }
    cout << best << endl;
    cout << mid;
    // return 0;
}