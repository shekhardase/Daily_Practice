#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 10; i++)
    {

        for (int j = 10; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}