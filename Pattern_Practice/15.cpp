#include <iostream>
using namespace std;

int main()
{

    int n = 10;

    for (int col = 0; col < n; col++)
    {
        for (int i = 0; i < col; i++)
        {
            cout << " ";
        }
        for (int row = 0; row < (2 * (n - col) - 1); row++)
        {
            cout << "*";
        }

        cout << endl;
    }                                                           
}
    