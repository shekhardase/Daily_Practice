// // // // #include <iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     // int matrix[0]
// // // //     int m;
// // // //     cin >> m;
// // // //     int n;
// // // //     cin >> n;

// // // //     int matrix[m][n];

// // // //     int count = 0;

// // // //     int total = m * n;

// // // //     int startingRow = 0;
// // // //     int startingCol = 0;
// // // //     int endingRow = m - 1;
// // // //     int endingCol = n - 1;

// // // //     for (int i = 0; i < m; i++)
// // // //     {
// // // //         for (int j = 0; j < n; j++)
// // // //         {
// // // //             cin >> matrix[i][j];
// // // //         }
// // // //     }

// // // //     for (int i = 0; i < m; i++)
// // // //     {
// // // //         for (int j = 0; j < n; j++)
// // // //         {
// // // //             cout << matrix[i][j] << " ";
// // // //         }
// // // //         cout << endl;
// // // //     }

// // // //     while (count < total)
// // // //     {
// // // //         // printing starting row
// // // //         for (int index = startingCol; count < total && index <= endingCol; index++)
// // // //         {
// // // //             /* code */
// // // //             cout << matrix[startingRow][index];
// // // //             count++;
// // // //         }
// // // //         startingRow++;

// // // //         // printing endingg col

// // // //         for (int index = startingRow; count < total && index <= endingRow; index++)
// // // //         {
// // // //             cout << matrix[index][endingCol];
// // // //             count++;
// // // //         }
// // // //         endingCol--;

// // // //         // printing ending row
// // // //         for (int index = endingCol; count < total && index >= startingCol; index--)
// // // //         {
// // // //             cout << matrix[endingRow][index];
// // // //             count++;
// // // //         }

// // // //         endingRow--;

// // // //         // printing starting col
// // // //         for (int index = endingRow; count < total && index >= startingRow; index--)
// // // //         {
// // // //             /* code */
// // // //             cout << matrix[index][startingCol];
// // // //             count++;
// // // //         }
// // // //         startingCol++;
// // // //     }
// // // // }

// // // // #include <iostream>
// // // // #include <vector>
// // // // using namespace std;

// // // // void rotate(vector<vector<int>> &matrix)
// // // // {
// // // //     int n = matrix.size();
// // // //     // transpose the matrix
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         for (int j = i; j < n; j++)
// // // //         {
// // // //             swap(matrix[i][j], matrix[j][i]);
// // // //         }
// // // //     }
// // // //     // reverse each row of the matrix
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         reverse(matrix[i].begin(), matrix[i].end());
// // // //     }
// // // // }

// // // // int main()
// // // // {
// // // //     vector<vector<int>> matrix = {{1, 2, 3},
// // // //                                   {4, 5, 6},
// // // //                                   {7, 8, 9}};
// // // //     rotate(matrix);
// // // //     for (int i = 0; i < matrix.size(); i++)
// // // //     {
// // // //         for (int j = 0; j < matrix[i].size(); j++)
// // // //         {
// // // //             cout << matrix[i][j] << " ";
// // // //         }
// // // //         cout << endl;
// // // //     }
// // // //     return 0;
// // // // }

// // // // #include <vector>
// // // // #include <bits/stdc++.h>

// // // // void rotate(std::vector<std::vector<int>> &matrix)
// // // // {
// // // //     int n = matrix.size();

// // // //     // Transpose the matrix
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         for (int j = i; j < n; j++)
// // // //         {
// // // //             std::swap(matrix[i][j], matrix[j][i]);
// // // //         }
// // // //     }

// // // //     // Reverse each row
// // // //     for (int i = 0; i < n; i++)
// // // //     {
// // // //         std::reverse(matrix[i].begin(), matrix[i].end());
// // // //     }
// // // // }

// // // tint

// // // #include <iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     int row;
// // //     int col;

// // //     cout << "Enter the number of rows = ";
// // //     cin >> row;

// // //     cout << "Enter the nunber of col = ";
// // //     cin >> col;

// // //     cout << "Enter the element you want to search = ";

// // //     int n;
// // //     cin >> n;

// // //     int arr[row][col];

// // //     for (int i = 0; i < row; i++)
// // //     {
// // //         for (int j = 0; j < col; j++)
// // //         {
// // //             cin >> arr[i][j];
// // //         }
// // //     }
// // //     cout << endl;

// // //     for (int i = 0; i < row; i++)
// // //     {
// // //         for (int j = 0; j < col; j++)
// // //         {
// // //             cout << arr[j][i] << " ";
// // //         }
// // //         cout << endl;
// // //     }

// // //     cout << endl;

// // //     for (int i = 0; i < row; i++)
// // //     {
// // //         for (int j = 0; j < col; j++)
// // //         {
// // //             if (arr[i][j] == n)
// // //             {
// // //                 cout << "Element Fouund at = " << i << " " << j;
// // //             }
// // //             else
// // //             {
// // //                 cout << "Target not Found";
// // //             }
// // //         }
// // //         cout << endl;
// // //     }

// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int row;
// //     int col;

// //     cout << "Enter the number of rows = ";
// //     cin >> row;

// //     cout << "Enter the nunber of col = ";
// //     cin >> col;

// //     int arr[row][col];

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cin >> arr[i][j];
// //         }
// //     }
// //     cout << endl;

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cout << arr[i][j] << " ";
// //         }
// //         cout << endl;
// //     }

// //     int max = INT_MIN;

// //     for (int i = 0; i < row; i++)
// //     {
// //         int sum = 0;
// //         for (int j = 0; j < col; j++)
// //         {

// //             sum = sum + arr[i][j];
// //         }
// //         if (sum > max)
// //         {
// //             max = sum;
// //         }
// //     }
// //     cout << "The maximum sum of row is = " << max << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {

// //     int row;
// //     int col;

// //     cout << "Enter the number of rows = ";
// //     cin >> row;

// //     cout << "Enter the nunber of col = ";
// //     cin >> col;

// //     int arr[row][col];

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cin >> arr[i][j];
// //         }
// //     }
// //     cout << endl;

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cout << arr[i][j] << " ";
// //         }
// //         cout << endl;
// //     }

// //     cout << endl;

// //     for (int i = 0; i < col; i++)
// //     {
// //         // for(int j = 0 ; j>])

// //         if (i % 2 != 0)
// //         {
// //             for (int j = row - 1; j >= 0; j--)
// //             {
// //                 cout << arr[j][i] << " ";
// //             }
// //         }

// //         else
// //         {
// //             for (int j = 0; j < row; j++)
// //             {
// //                 cout << arr[j][i] << " ";
// //             }
// //         }
// //     }
// //     return 0;
// // }

// // i want to print pattern like snake
// // first row then reverse second row then again 3rd row beginnging

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int row, col;
// //     cin >> row >> col;

// //     int arr[row][col];

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cin >> arr[i][j];
// //         }
// //     }

// //     for (int i = 0; i < row; i++)
// //     {
// //         for (int j = 0; j < col; j++)
// //         {
// //             cout << arr[i][j] << " ";
// //         }
// //         cout << endl;
// //     }

// //     for (int i = 0; i < col; i++)
// //     {
// //         if (i % 2 != 0)
// //         {
// //             for (int j = col - 1; j >= 0; j--)
// //             {
// //                 cout << arr[i][j] << " ";
// //             }
// //         }

// //         else
// //         {
// //             for (int j = 0; j < row; j++)
// //             {
// //                 cout << arr[i][j] << " ";
// //             }
// //         }
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin >> row >> col;

//     int arr[row][col];

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int j = 0; j < col; j++)
//     {
//         if (j % 2 != 0)
//         {
//             for (int i = col - 1; i >= 0; i--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }

//         else
//         {
//             for (int i = 0; i < col; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin >> row >> col;

//     int arr[row][col];

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int maxCol = col - 1;
//     int maxRow = row - 1;

//     for (int i = 0; i < col; i++)
//     {
//         if (col == maxCol)
//         {
//             for (int j = 0; j < row; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         maxCol--;
//     }
//     for (int i = 0; i < col; i++)
//     {
//         if (row == maxRow)
//         {
//             for (int j = 0; j < row; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         maxRow--;
//     }
// }

#include <iostream>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int total = row * col;

    int endingRow = row - 1;
    int endingCol = col - 1;

    int startingRow = 0;
    int startingCol = 0;

    int count = 0;

    while (count < total)
    {
        //printing starting row 
        for (int i = startingRow; i < count; i++)
        {
            /* code */
        }
        
    }
}