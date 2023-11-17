// Lecture focuses on question solving
//  Q1 . Reverse the string using recursion
#include <iostream>
using namespace std;

void reverse(string str, int end)
{
    // end = str.size() - 1;

    if (end < 0)
    {
        return;
    }
    cout << str[end] << " ";

    reverse(str, end - 1);
}

int main()
{
    string str;
    cin >> str;

    reverse(str, str.size() - 1);
}
// #include <iostream>
// using namespace std;

// void reverse(string &str, int start, int end)
// {
//     // Base case: when the start index crosses the end index
//     if (start >= end)
//     {
//         return;
//     }

//     // Swap the characters at the start and end indices
//     swap(str[start], str[end]);

//     // updation
//     start = start + 1;
//     end = end - 1;

//     // Recur for the remaining substring
//     reverse(str, start, end);
// }

// int main()
// {
//     string str;
//     cin >> str;

//     // Call the reverse function with appropriate parameters
//     reverse(str, 0, str.size() - 1);

//     // Output the reversed string
//     cout << "Reversed String: " << str << endl;

//     return 0;
// }
