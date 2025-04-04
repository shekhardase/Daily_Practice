#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[mini] > nums[j])
            {
                mini = j;
            }
        }
        swap(nums[i], nums[mini]);
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

    cout << "After Sorting " << endl;
    selectionSort(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
