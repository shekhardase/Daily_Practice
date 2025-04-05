#include <bits/stdc++.h>
using namespace std;

int Piv(vector<int> &nums, int low, int high)
{
    int pivott = nums[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (nums[i] <= pivott && i <= high - 1)
        {
            i++;
        }
        while (nums[j] > pivott && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }

        swap(pivott, nums[j]);
    }
    return j;
}

void QuickSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivot = Piv(nums, low, high);
        QuickSort(nums, low, pivot - 1);
        QuickSort(nums, pivot + 1, high);
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

    QuickSort(nums, 0, n - 1);

    cout << "After Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
