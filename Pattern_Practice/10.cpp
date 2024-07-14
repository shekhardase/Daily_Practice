#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for (int col = 0; col < n; col++)
    {
        for (int row = 0; row < col; row++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int col = 0; col < n; col++)
    {
        for (int row = n; row > col; row--)
        {
            cout << "*";
        }
        cout << endl;
    }
}