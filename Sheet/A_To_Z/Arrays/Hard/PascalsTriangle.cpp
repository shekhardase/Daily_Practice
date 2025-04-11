// we have give Row and Column number
// find the number at that position
// Question type 1

#include <bits/stdc++.h>
using namespace std;

int NCR(int row, int col)
{
    // Convert to 0-based indexing for combination logic
    int n = row - 1;
    int r = col - 1;

    if (r > n - r)
        r = n - r; // Use symmetry: C(n, r) = C(n, n-r)

    long long res = 1;
    for (int i = 0; i < r; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

vector<int> print(int n)
{
    vector<int> Row;
    int res = 1;
    Row.push_back(res);
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / (i);
        Row.push_back(res);
    }
    return Row;
}

int main()
{
    int row;
    int col;
    int n;
    cin >> n;
    // cin >> row >> col;

    // simple trick to find number is ncr
    // as r-1 C c-1

    for (int i = 0; i <= n; i++)
    {
        vector<int> ans = print(i);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
