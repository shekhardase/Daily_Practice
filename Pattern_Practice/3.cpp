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
}