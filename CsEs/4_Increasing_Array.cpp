#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    long long count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            while (vec[i] > vec[i + 1])
            {
                vec[i + 1]++;
                count++;
            }
            // count++;
        }
    }

    cout << count;
}

// Input:

// 5
// 3 2 5 1 7
// Output:

// 5