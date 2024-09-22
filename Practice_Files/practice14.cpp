#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int i, int day)
{
    int limit = 0;
    while (i > 0)
    {
        limit = limit + arr[i];
        i--;
    }
}

int main()
{
    int day = 15;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxi = *max_element(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }
    int days = 15;
    for (int i = maxi; i < sum; i++)
    {

        int daysReq = dd(weight, i);

        if (daysReq <= days)
        {
            return daysReq;
        }
    }
}