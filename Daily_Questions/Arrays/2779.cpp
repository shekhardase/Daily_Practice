#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cout << "Value of k : " << endl;
    cin >> k;
    int n;
    cout << "Size of array: " << endl;
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<pair<int, int>> v;

    // Create intervals [nums[i] - k, nums[i] + k]
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(nums[i] - k, nums[i] + k));
    }

    // Sort intervals by their starting point
    sort(v.begin(), v.end());

    int intersections = 0;
    int end = v[0].second; // Initial end point of the first interval

    // Iterate through the intervals to count intersections
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first <= end)
        {
            // Overlap found
            intersections++;
            end = min(end, v[i].second); // Update the end to the minimum of overlapping intervals
        }
        else
        {
            // No overlap, move to the next interval
            end = v[i].second;
        }
    }

    cout << "\nNumber of intersections: " << intersections << endl;

    return 0;
}
