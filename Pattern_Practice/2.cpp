#include <iostream>
using namespace std;
int main()
{
    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "8";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int col = 0; col < 10; col++)
    {
        for (int row = 10; row > 10; row--)
        {
            cout << "*";
        }
        cout << endl;
    }
}