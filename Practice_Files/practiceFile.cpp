// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // int main()
// // {
// //     vector<int> difficulty = {2, 4, 6, 8, 10};
// //     vector<int> profit = {10, 20, 30, 40, 50};
// //     vector<int> worker = {4, 5, 6, 7};

// //     // Print the vectors
// //     cout << "Difficulty: ";
// //     for (int d : difficulty)
// //     {
// //         cout << d << " ";
// //     }
// //     cout << endl;

// //     cout << "Profit: ";
// //     for (int p : profit)
// //     {
// //         cout << p << " ";
// //     }
// //     cout << endl;

// //     cout << "Worker: ";
// //     for (int w : worker)
// //     {
// //         cout << w << " ";
// //     }
// //     cout << endl;

// //     int count = 0 ;
// //     for(int i = 0 ; i < worker.size() ; i++)
// //     {
// //         for(int j = 0 ; j < difficulty.size() -1 ; j++)
// //         {
// //             if( difficulty[j] < worker[i] < difficulty[j+1])
// //             {
// //                 count = count + profit[i];
// //             }
// //         }
// //     }
// //     cout << count;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // void print(int count = 0)
// // {
// //     // int count = 0;
// //     if (count == 4)
// //     {
// //         return;
// //     }

// //     cout << "This is recursion" << endl;
// //     count++;
// //     print(count);
// // }

// // int main()
// // {

// // print();
// // }

// #include <iostream>
// using namespace std;

// // void print(int count = 0)
// // {
// //     if (count == 10)
// //     {
// //         return;
// //     }

// //     cout << "This is recursion" << endl;
// //     count++;
// //     print(count);
// // }

// // int main()
// // {
// //     // int count = 0;
// //     print(count);
// // }

// // #include <iostream>
// // using namespace std;

// // void printNumbers(int n)
// // {
// //     cout << n << endl;
// //     if (n == 0)
// //     {
// //         return;
// //     }
// //     printNumbers(n - 1);
// // }

// // int main()
// // {
// //     printNumbers(10);
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int printNumbers(int n)
// // {

// //     if (n == 0)
// //     {
// //         return 1;
// //     }

// //     return 1 + printNumbers(n - 1);
// // }

// // int main()
// // {
// //     int count = printNumbers(10);
// //     cout << "Total numbers printed: " << count << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// void printname(string name, int count)
// {
//     cout << name << endl;

//     if (count == 5)
//     {
//         return;
//     }
//     count++;
//     printname(name, count);
// }

// int main()
// {
//     string name;
//     cin >> name;
//     int count = 1;
//     printname(name, count);
// }

// // sjsao

#include <iostream>
using namespace std;

void print(int count, int n)
{
    cout << count << endl;
    if (count == n)
    {
        return;
    }
    count++;
    print(count, n);
}

void printReverse(int count, int n)
{
    cout << n << endl;
    if (count == n)
    {
        return;
    }
    n--;
    printReverse(count, n);
}

int main()
{
    int count = 0;
    int n;
    cin >> n;

    print(count, n);
    printReverse(count, n);
}