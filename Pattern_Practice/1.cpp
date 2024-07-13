#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++) // Loop to handle the number of rows (10 rows in total)
    {
        for (int j = 0; j <= i; j++) // Loop to print stars in each row. Number of stars is equal to row number + 1
        {
            cout << "*"; // Print a star
        }
        cout << endl; // Move to the next line after printing stars for the current row
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // for(int i = 0 ; i < )

    return 0;
}
