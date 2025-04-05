#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &nums, int n)
{
    if (n == 1)
    {
        return;
    }

    for (int j = 0; j <= n - 2; j++)
    {
        if (nums[j] > nums[j + 1])
        {
            swap(nums[j], nums[j + 1]);
        }
    }
    bubblesort(nums, n - 1);
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
    bubblesort(nums, n);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}