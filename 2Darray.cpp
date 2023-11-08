// #include <iostream>
// using namespace std;

// bool isPresent(int arr[][3], int target, int row, int column)
// {

//     for (int row = 0; row < 3; row++)
//     {
//         for (int column = 0; column < 3; column++)
//         {
//             if (arr[row][column] == target)
//             {
//                 cout << "ELEMENT IS PRESENT AT " << row << " " << column << endl;
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// void printsumCOL(int arr[][3], int row, int column)
// {
//     cout << "printing sum of column" << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int column = 0; column < 3; column++)
//         {
//             sum = sum + arr[column][row];
//         }
//         cout << sum << " ";
//     }

//     // cout<<endl;1 2 3 4 5 6 7 8 9
// }

// void printsumROW(int arr[][3], int row, int column)
// {
//     cout << "printing sum of row" << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int column = 0; column < 3; column++)
//         {
//             sum = sum + arr[row][column];
//         }
//         cout << sum << " " << endl;
//     }

//     cout << endl;
// }

// int largest_ROW_SUM(int arr[][3], int row, int col)
// {

//     //checking row wise
//     int maxi = INT_MIN;
//     int rowIndex = -1;

//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int column = 0; column < 3; column++)
//         {
//             sum = sum + arr[row][column];
//         }
//         // cout << sum << " " << endl;

//         if (sum > maxi)
//         {
//             maxi = sum;
//             rowIndex = row;
//         }
//     }

//     cout << "The max sum is " << maxi << endl;
//     return rowIndex;
// }

// int main()
// {

//     // creating a 2D array
//     int arr[3][3];

//     // taking input in 2D array -> row wise input

//     cout << "Enter the array u want to print" << endl;

//     for (int row = 0; row < 3; row++)
//     {
//         for (int column = 0; column < 3; column++)
//         {
//             cin >> arr[row][column];
//         }
//     }

//     // taking column wise input
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cin >> arr[j][i];
//     //     }
//     // }
//     // printing 2D array

//     cout << "Printing array" << endl;

//     for (int row = 0; row < 3; row++)
//     {
//         for (int column = 0; column < 3; column++)
//         {
//             cout << arr[row][column] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     /*
//        cout << "Enter the element to search" << endl;
//         int target;
//         cin >> target;
//         cout << endl;

//         if (isPresent(arr, target, 3, 3))
//         {
//             cout << "Element is present" << endl;
//         }
//         else
//         {
//             cout << "Element is not present" << endl;
//         }
//         cout << endl;
//         printsumROW(arr, 3, 3);
//         printsumCOL(arr, 3, 3);

//     */
//    int ans= largest_ROW_SUM(arr , 3 ,3 );
//     cout << "Max row is at index (row-wise)" << ans << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     for (int col = 0; col < 3; col++)
//     {

//         if (col % 2 == 0)
//         {
//             for (int row = 0; row < 3; row++)
//             {
//                 cout << arr[row][col] << " ";
//             }
//             cout << endl;
//         }

//         else
//         {
//             for (int row = 3 - 1; row >= 0; row--)
//             {
//                 cout << arr[row][col] << " ";
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the number of rows = ";
    cin >> row;

    cout << "Enter the number of columns = ";
    cin >> col;

    int arr[row][col];

    // Input matrix elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output the matrix
    cout << "Matrix you entered:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible value

    for (int i = 0; i < row; i++)
    {
        int sum = 0; // Initialize sum for each row

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j]; // Calculate the sum of each row
        }

        if (sum > maxSum)
        {
            maxSum = sum; // Update maxSum if we find a bigger sum
        }
    }

    cout << "The maximum sum of a row = " << maxSum << endl;

    return 0;
}
