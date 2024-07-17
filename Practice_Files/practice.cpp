
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeKdigits(string num, char digits)
    {

        int k = int(digits);
        stack<char> stack;
        for (char digit : num)
        {
            while (!stack.empty() && k > 0 && stack.top() < digit)
            {
                stack.pop();
                k--;
            }
            stack.push(digit);
        }
        while (k > 0 && !stack.empty())
        {
            stack.pop();
            k--;
        }
        string str;

        while (!stack.empty())
        {
            str += stack.top();
            stack.pop();
        }

        reverse(str.begin(), str.end());
        // Remove leading zeros
        str.erase(0, str.find_first_not_of('0'));
        if (str.empty())
        {
            str = "0";
        }
        return str;
    }
};

int main()
{
    Solution obj;
    string num = "123";
    char k = 3;
    string result = obj.removeKdigits(num, k);
    cout << "Result: " << result << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     string removeKdigits(string num, int k)
//     {
//         stack<char> stack;
//         for (char digit : num)
//         {
//             while (!stack.empty() && k > 0 && stack.top() < digit)
//             {
//                 stack.pop();
//                 k--;
//             }
//             stack.push(digit);
//         }
//         while (k > 0 && !stack.empty())
//         {
//             stack.pop();
//             k--;
//         }
//         string str;

//         while (!stack.empty())
//         {
//             str += stack.top();
//             stack.pop();
//         }

//         reverse(str.begin(), str.end());
//         // Remove leading zeros
//         str.erase(0, str.find_first_not_of('0'));
//         if (str.empty())
//         {
//             str = "0";
//         }
//         return str;
//     }
// };

// int main()
// {
//     Solution obj;
//     string num = "10200";
//     int k = 1;
//     string result = obj.removeKdigits(num, k);
//     cout << "Result: " << result << endl;
// }