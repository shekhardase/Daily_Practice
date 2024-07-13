#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << 0;
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            cout << 0;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int col = 0; col < 10; col++)
    {
        for (int row = 0; row <= col; row++)
        {
            cout << "*";
        }
        cout << endl;
    }
}