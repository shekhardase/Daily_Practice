// #include <iostream>
// using namespace std;

// char upperlower(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }

//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPalindrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         /* code */
//         if (upperlower(a[s]) != upperlower(a[e]))
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//         return 1;
//     }
//  }

// int getsize(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         // /* code */
//         count++;
//     }

//     return count;
// }

// void reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         /* code */
//         swap(name[s++], name[e--]);
//     }
// }

// int main()
// {
//     char name[20];

//     cout << "Your name is " << endl;
//     cin >> name;

//     cout << "Your name is " << name << endl;

//     int len = getsize(name);

//     cout << " The length of name is " << getsize(name) << endl;

//     reverse(name, len);

//     cout << "Your reverse name is " << endl;
//     cout << name << endl;

//     cout << "Palindrome or not  - " << checkPalindrome(name, len) << endl;

//     cout << "CHARACTER is " << upperlower('b') << endl;
//     cout << "CHARACTER is " << upperlower('B') << endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aabbc";
    string t = "awabbc";
    int size = t.length();

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << s << endl;
    cout << t << endl;

    cout << t[size-1];
}