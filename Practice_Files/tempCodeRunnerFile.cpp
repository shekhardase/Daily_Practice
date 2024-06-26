#include <iostream>
using namespace std;

int print(int n)
{
    if (n == 0)
    {
        return 0;
    }

    cout << "This is recursion" << endl;
    return print(n - 1);
}

int main()
{
    print(9); // Change the argument to 9 to avoid infinite recursion
}