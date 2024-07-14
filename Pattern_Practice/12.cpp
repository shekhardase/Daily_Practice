#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int col = 0; col < n; col++)
    {
        for (int i = n; i > col; i--)
        {
            cout << " ";
        }

        for(int row = 0 ; row<col;row++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}
