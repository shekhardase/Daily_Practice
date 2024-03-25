// #include <iostream>
// #include <stack>

// using namespace std;

// int main()
// {
//     string str = "shekhar";
//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         char c = str[i];
//         s.push(c);
//     }

//     string ans = " ";
//     while (!s.empty())
//     {
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }

//     cout << "ans is " << ans << endl;
//     return 0;

// }
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "shekhar";
    stack<char> s;
    cout << str << endl;
    for (int i = 0; i < str.length(); i++)
    {

        s.push(str[i]);
        cout << s.top() << " ";
    }
    cout << endl;
    string ans = " ";
    for (int i = 0; i < str.length(); i++)
    {
        // cout << str[i] << endl;
        // ans.push_back(s[i]);
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
        cout << endl;
        cout << ans << " ";
    }

    cout << ans << endl;
}