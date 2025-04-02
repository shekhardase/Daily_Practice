#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_indx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_indx])
            {
                min_indx = j;
            }
            swap(arr[min_indx], arr[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionsort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
