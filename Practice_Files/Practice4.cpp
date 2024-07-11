#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 2)
    {
        fun(n - 1);
        fun(n - 2);
        fun(n - 3);
    }

    cout << n << endl;
}
void morefun(int n)
{
    cout << n << endl;
    if (n > 2)
    {
        morefun(n - 1);
        morefun(n - 2);
        morefun(n - 3);
    }
}

int main()
{
    int n = 10;
    morefun(n);
}