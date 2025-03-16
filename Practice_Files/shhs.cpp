#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> temp1 = {1, 2, 3, 4};
    vector<int> temp2 = {4, 3, 6, 2};

    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < temp1.size(); i++)
    {
        num1 = num1 * 10 + temp1[i];
    }
    for (int i = 0; i < temp2.size(); i++)
    {
        num2 = num2 * 10 + temp2[i];
    }

    cout << num1 << endl;
    cout << num2 << endl;

    int product = num1 * num2;
    cout << product << endl;
}
