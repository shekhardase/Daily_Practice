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

#include <iostream>
using namespace std;

void Fibo(int t1, int n, int t2, int count)
{
    // int count = 0;
    if (count == n)
    {
        return;
    }

    int nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

    count++;

    Fibo(t1, n, t2, count);
}

int main()
{

    int n;
    cin >> n;
    int t1 = 0;
    int t2 = 1;
    int count = 0;
    Fibo(t1, n, t2, count);
}