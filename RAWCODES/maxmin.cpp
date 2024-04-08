#include <iostream>
using namespace std;

int getmax(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(num[i], maxi);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return maxi;
}

int getmin(int num[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(num[i], mini);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;

    // int arr[size];
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getmax(num, size) << endl;
    // cout << "Minimum element is " << getmin << (num, size) << endl
    cout << "Minimum element is " << getmin(num, size) << endl;
}