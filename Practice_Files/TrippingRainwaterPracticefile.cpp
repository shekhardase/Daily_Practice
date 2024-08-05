#include <bits/stdc++.h>
using namespace std;

int main()
{
    // [ 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 ]

    // // vector<int>{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    // int water = 0;

    // int left = 0;
    // int right = height.size() - 1;
    // int leftMax = height[left];
    // int rightMax = height[right];
    // while (left < right)
    // {
    //     if (leftMax < rightMax)
    //     {
    //         left++;
    //         leftMax = max(leftMax, height[left]);
    //         water += leftMax - height[left];
    //     }
    //     else
    //     {
    //         right--;
    //         rightMax = max(rightMax, height[right]);
    //         water += rightMax - height[right];
    //     }
    // }
    // cout << water;

    int n = 4;
    int m = 4;
    int arr[n] = {1, 4, 5, 7};
    int brr[m] = {10, 20, 30, 40};

    // find closet sum to x
    int x = 32;
    int start = 0;
    int end = m - 1;

    int closest_sum = INT_MAX;
    int closest_pair[2];

    while (start < n && end >= 0)
    {
        int current_sum = arr[start] + brr[end];

        if (abs(current_sum - x) < abs(closest_sum - x))
        {
            closest_sum = current_sum;
            closest_pair[0] = arr[start];
            closest_pair[1] = brr[end];
        }

        if (current_sum > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    cout << closest_pair[0] << " " << closest_pair[1];
}