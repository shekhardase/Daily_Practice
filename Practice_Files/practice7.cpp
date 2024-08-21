#include <vector>
#include <iostream>
using namespace std;

int findLowerBound(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int findUpperBound(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int target = 6;

    cout << findLowerBound(vec, target);
    cout << endl;
    cout << findUpperBound(vec, target);

    return 0;
}