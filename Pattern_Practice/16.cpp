#include <iostream>
using namespace std;

int main()
{
    int n = 10; // Adjust this to control the number of rows in the pyramid

    for (int col = 0; col < n; col++)
    {
        // Print leading spaces
        for (int i = n; i > col; i--)
        {
            cout << " ";
        }

        // Print stars
        for (int row = 0; row < (2 * col + 1); row++)
        {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    for (int col = 0; col < n; col++)
    {
        for (int i = 0; i <= col; i++)
        {
            cout << " ";
        }
        for (int row = 2 * ((n - col) - 1); row >= 1; row--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
