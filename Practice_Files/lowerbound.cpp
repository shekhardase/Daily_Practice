#include <iostream>
#include <vector>
using namespace std;
int lower_bound(vector<int> &v, int value)
{
    int left = 0;
    int right = v.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Check if mid is greater than or equal to value
        if (v[mid] < value)
        {
            left = mid + 1; // Value must be in the right half
        }
        else
        {
            right = mid; // Value could be in the left half or mid
        }
    }

    return left;
}

int upper_bound(vector<int> &v, int value)
{
    int left = 0;
    int right = v.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Check if mid is greater than value
        if (v[mid] <= value)
        {
            left = mid + 1; // Value must be in the right half
        }
        else
        {
            right = mid; // Value could be in the left half or mid
        }
    }

    return left;
}

int main()
{
    vector<int> v = {18,21,22,23,24};
    int value = 20;

    int lb = lower_bound(v, value);
    cout << "Lower bound of " << value << " is at position: " << lb << endl;
    int ub = upper_bound(v, value);
    cout << "Upper bound of " << value << " is at position: " << ub << endl;

    return 0;
}
