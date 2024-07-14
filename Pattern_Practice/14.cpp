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



    return 0;
}
