// #include <iostream>
// using namespace std;

// // while solving recursion question just think of solving one case
// // recursion will solve all cases

// void ReachHome(int source, int destination)
// {

//     cout << "Source = " << source << endl;
//     cout << "Destination = " << destination << endl;

//     // base case
//     if (source == destination)
//     {
//         cout << "Pohoch Gaya" << endl;
//         return;
//     }

//     // recursive call
//     // 1 step age jaenge toh age badhenge
//     // recursive call mai source age badhega

//     source++;
//     ReachHome(source, destination); // recursive call
// }

// int main()
// {

//     int destination = 20;
//     int source = 1;

//     ReachHome(source, destination);
// }

// Fibonacci series using recursion

// #include <iostream>
// using namespace std;

// void Fibo(int t1, int n, int t2, int count)
// {
//     // int count = 0;
//     if (count == n)
//     {
//         return;
//     }

//     int nextTerm = t1 + t2;
//     t1 = t2;
//     t2 = nextTerm;

//     count++;

//     Fibo(t1, n, t2, count);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     int t1 = 0;
//     int t2 = 1;
//     int count = 0;
//     Fibo(t1, n, t2, count);
// }

// above code is wrong

// below new fibonacci number series using recursion
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     int ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }

// // sum of n numbers using recursion
// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     return n + sum(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fib(n) << endl;
//     cout << sum(n) << endl;
// }





// checking if array is sorted or not

#include <iostream>
#include <vector>

using namespace std;

bool isArraySorted(const vector<int> &arr, int idx)
{

    //base case 
    if (idx == arr.size() - 1)          //check if  index is greater than actual size we checking for array
    {
        return true;
    }

    if (arr[idx] > arr[idx + 1])      // checking if sorted or not 
    {                                 // checking index is greater than index + 1 
        return false;
    }

    return isArraySorted(arr, idx + 1);     //calling function again and again increasing index value for next index to be check
}

int main()
{
    vector<int> exampleArray = {1, 2, 3, 4, 5};
    cout << boolalpha << isArraySorted(exampleArray, 0) << endl;

    return 0;
}
