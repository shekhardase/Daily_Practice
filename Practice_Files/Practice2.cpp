// #include <bits/stdc++.h>
// using namespace std;

// bool pali(string str, int start, int end)
// {
//     if (str[start] != str[end])
//     {
//         return false;
//     }
//     start++;
//     end--;
//     pali(str, start, end);
//     return true;
// }

// int main()
// {
//     string str = "aabbaa";

//     int start = 0;
//     int end = str.size() - 1;
//     cout << pali(str, start, end);
// }

#include <iostream>
using namespace std;

bool pali(string str, int start, int end)
{
    if (start >= end)
    {
        return true; // Base case: if start index is greater than or equal to end index, it's a palindrome
    }
    if (str[start] != str[end])
    {
        return false; // If characters at start and end are different, it's not a palindrome
    }
    return pali(str, start + 1, end - 1); // Recursively check the next pair of characters
}

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibo(n - 1);
    int start = fibo(n - 2);
    // cout << last << endl;
    // cout << start << endl;
    return last + start;
}

int main()
{
    string str = "aabbaa";

    int start = 0;
    int end = str.size() - 1;
    cout << (pali(str, start, end) ? "true" : "false") << endl;

    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}