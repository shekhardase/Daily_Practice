#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &nums, int i, int n)
{

    if (i == n)
    {
        return;
    }

    int target = i;
    while (target > 0 && nums[target] < nums[target - 1])
    {
        swap(nums[target], nums[target - 1]);
        target--;
    }

    InsertionSort(nums, i + 1, n);
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

    InsertionSort(nums, 0, n);

    cout << "After Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
