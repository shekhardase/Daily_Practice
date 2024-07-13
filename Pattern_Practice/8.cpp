#include <iostream>
using namespace std;

int main()
{
    int n = 10;                 // Number of rows
    for (int i = 0; i < n; i++) // Loop to handle the number of rows
    {
        for (int j = 0; j < i; j++) // Loop to print spaces
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) // Loop to print stars
        {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing stars and spaces for the current row
    }
}