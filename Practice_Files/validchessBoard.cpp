#include <bits/stdc++.h>

using namespace std;

int main()
{

    // binary 2d array with 0 representing white and 1 representing black

    int n;

    cout << "As it is chess board it should be n x n matrix / 2d array-> " << endl;
    cin >> n;
    vector<vector<int>> chess(n, vector<int>(n));

    cout << "Enter chess colouring: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> chess[i][j];
        }
    }

    // Display the entered chessboard for verification
    cout << endl;
    cout << endl;

    cout << "The entered chess colouring is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }

    // now that we have an 2d array filled with 0 and 1 we have to find is it valid chess board or not ?

    int trigger = 0;
    if (chess[0][0] == 0)
    {
        trigger = 0;
    }
    else
    {
        trigger = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (chess[i][j] != trigger)
            {
                cout << "Not a valid chess board" << endl;
                return 0;
            }
            trigger = abs(1 - trigger);
        }
    }
    cout << "Valid Chess board " << endl;
}
