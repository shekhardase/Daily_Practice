// #include <iostream>
// using namespace std;
// int main()
// {

//     // static 2d array
//     // int n;
//     // cin >> n;
//     // int m;
//     // cin >> m;

//     // int arr[n][m];

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // // dynamic 1d array

//     // int size;
//     // cin >> size;

//     // int *ara = new int[size];

//     // for (int i = 0; i < size; i++)
//     // {
//     //     cin >> ara[i];
//     // }

//     // for (int i = 0; i < size; i++)
//     // {
//     //     // cin>>ara[i] ;
//     //     cout << ara[i] << " " << endl;
//     // }

//     // cout << *ara << endl;

//     // delete new int[size];

//     // cout << *ara << endl;

//     int row;
//     cin >> row;
//     int col;
//     cin >> col;
//     // creating array
//     int **arr = new int *[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[col];
//     }

//     // taking input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // printing
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // releasing memory

//     for (int i = 0; i < row; i++)
//     {
//         delete[] arr[i];
//     }

//     delete[] arr;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row;
//     int col;
//     cout << "Enter the number of row = " << endl;
//     cin >> row;
//     cout << "Enter the number of col = " << endl;
//     cin >> col;

//     int **arr = new int *[row];

//     for (int i = 0; i < col; i++)
//     {
//         arr[i] = new int[row];
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Thus we have created the array " << endl;
//     cout << "Am I right 2d dyamic array is nothing but simple 1d dynamic array and these array created multiple times till col count" << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "and finally finished 2d array dynamically" << endl;
//     return 0;
// }