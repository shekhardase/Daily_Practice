#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &nums)
{
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;   

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Before Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    BubbleSort(nums);

    cout << "After Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

