// // // // // // // // // #include <bits/stdc++.h>

// // // // // // // // // using namespace std;

// // // // // // // // // int fact(int n)
// // // // // // // // // {

// // // // // // // // //     if (n == 0 || n == 1)
// // // // // // // // //     {
// // // // // // // // //         return 1;
// // // // // // // // //     }

// // // // // // // // //     return n * fact(n - 1);
// // // // // // // // // }

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     for (int i = 0; i < 10; i++)
// // // // // // // // //     {
// // // // // // // // //         cout << fact(i) << endl;
// // // // // // // // //     }
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;

// // // // // // // // int getfibo(int n)
// // // // // // // // {
// // // // // // // //     if (n == 0 || n == 1)
// // // // // // // //     {
// // // // // // // //         return n;
// // // // // // // //     }
// // // // // // // //     return getfibo(n - 1) + getfibo(n - 2);
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     for (int i = 0; i < 10; i++)
// // // // // // // //     {
// // // // // // // //         cout << getfibo(i) << endl;
// // // // // // // //     }
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // void getit(int n, vector<string> &nums)
// // // // // // // {
// // // // // // //     int count = 0;

// // // // // // //     if (n < 0 || n == 0)
// // // // // // //     {
// // // // // // //         return;
// // // // // // //     }

// // // // // // //     int rem = n % 10;
// // // // // // //     n = n / 10;
// // // // // // //     getit(n, nums);
// // // // // // //     cout << nums[rem] << " ";
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// // // // // // //     int n = 1000003;
// // // // // // //     getit(n, nums);
// // // // // // // }

// // // // // // // Exponent Function

// // // // // // // #include <bits/stdc++.h>

// // // // // // // using namespace std;

// // // // // // // int exp(int n)
// // // // // // // {
// // // // // // //     if (n == 0)
// // // // // // //     {
// // // // // // //         return 1;
// // // // // // //     }
// // // // // // //     int ans = 2 * exp(n - 1);
// // // // // // //     return ans;
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int n = 10;
// // // // // // //     cout << exp(10) << endl;
// // // // // // // }

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // bool isSorted(int i, int n, vector<int> &nums)
// // // // // // // {
// // // // // // //     if (i >= n)
// // // // // // //     {
// // // // // // //         return true;
// // // // // // //     }
// // // // // // //     if (nums[i] > nums[i + 1])
// // // // // // //     {
// // // // // // //         return false;
// // // // // // //     }

// // // // // // //     return isSorted(i + 1, n, nums);
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int n;
// // // // // // //     cin >> n;
// // // // // // //     vector<int> nums(n);

// // // // // // //     for (int i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         cin >> nums[i];
// // // // // // //     }

// // // // // // //     if (isSorted(0, n, nums))
// // // // // // //     {
// // // // // // //         cout << "sorted" << endl;
// // // // // // //     }
// // // // // // //     else
// // // // // // //     {
// // // // // // //         cout << "Non Sorted" << endl;
// // // // // // //     }
// // // // // // // }

// // // // // // // #include <bits/stdc++.h>

// // // // // // // using namespace std;

// // // // // // // void printset(vector<int> nums, vector<int> ans, int i)
// // // // // // // {
// // // // // // //     if (i >= nums.size())
// // // // // // //     {
// // // // // // //         for (auto i : ans)
// // // // // // //         {
// // // // // // //             cout << i << " ";
// // // // // // //         }
// // // // // // //         cout << endl;
// // // // // // //         return;
// // // // // // //     }

// // // // // // //     printset(nums, ans, i + 1);
// // // // // // //     ans.push_back(nums[i]);
// // // // // // //     printset(nums, ans, i + 1);
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int n;
// // // // // // //     cin >> n;
// // // // // // //     vector<int> nums(n);

// // // // // // //     for (int i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         cin >> nums[i];
// // // // // // //     }
// // // // // // //     vector<int> ans;
// // // // // // //     printset(nums, ans, 0);

// // // // // // //     /* Example usage: print all subsets */
// // // // // // //     cout << "All subsets printed above." << endl;
// // // // // // // }

// // // // // // // n ways to reach stairs with 1 2 3 steps

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // int findway(int n)
// // // // // // // {
// // // // // // //     if (n == 0)
// // // // // // //     {
// // // // // // //         return 1;
// // // // // // //     }
// // // // // // //     if (n < 0)
// // // // // // //     {
// // // // // // //         return 0;
// // // // // // //     }

// // // // // // //     return findway(n - 1) + findway(n - 2) + findway(n - 3);
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int n;
// // // // // // //     cin >> n;

// // // // // // //     cout << findway(n);
// // // // // // // }

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // // string = abc
// // // // // // // // op :  a b c  ab bc ac abc []

// // // // // // // void print(string str, int i, string ans)
// // // // // // // {
// // // // // // //     if (i == str.size())
// // // // // // //     {
// // // // // // //         cout << ans << endl;
// // // // // // //         return;
// // // // // // //     }

// // // // // // //     print(str, i + 1, ans);
// // // // // // //     ans.push_back(str[i]);
// // // // // // //     print(str, i + 1, ans);
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     string str;
// // // // // // //     cin >> str;

// // // // // // //     string ans = "";
// // // // // // //     print(str, 0, ans);
// // // // // // // }

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // void permut(string str, int index)
// // // // // // // {
// // // // // // //     if (index >= str.size())
// // // // // // //     {
// // // // // // //         cout << str << " ";
// // // // // // //         return;
// // // // // // //     }

// // // // // // //     for (int i = index; i < str.size(); i++)
// // // // // // //     {
// // // // // // //         swap(str[index], str[i]);
// // // // // // //         permut(str, index + 1);
// // // // // // //         swap(str[index], str[i]);
// // // // // // //     }
// // // // // // // }

// // // // // // // int main()
// // // // // // // {

// // // // // // //     string str;
// // // // // // //     cin >> str;

// // // // // // //     permut(str, 0);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // /// check palidrome using recursion

// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;

// // // // // // bool check(string str, int start, int end)
// // // // // // {
// // // // // //     if (start >= end)
// // // // // //     {
// // // // // //         return true;
// // // // // //     }
// // // // // //     if (str[start] != str[end])
// // // // // //     {
// // // // // //         return false;
// // // // // //     }
// // // // // //     return check(str, start + 1, end - 1);
// // // // // // }

// // // // // // int main()
// // // // // // {
// // // // // //     string str;
// // // // // //     cin >> str;

// // // // // //     if (check(str, 0, str.size() - 1))
// // // // // //     {
// // // // // //         cout << "Palindrome";
// // // // // //     }
// // // // // //     else
// // // // // //     {
// // // // // //         cout << "Not a palindrome";
// // // // // //     }
// // // // // // }

// // // // // // 1. Calculate power of a number using recursion (a^n)
// // // // // // 2. Print array in reverse using recursion
// // // // // // 3. Find sum of digits using recursion (e.g., 123 -> 1+2+3 = 6)
// // // // // // 4. Count the number of digits in a number using recursion
// // // // // // 5. Binary search using recursion
// // // // // // 6. Find GCD of two numbers using recursion
// // // // // // 7. Print all binary strings of length n
// // // // //             // Example input:
// // // // //             // n = 3

// // // // //             // Expected output:
// // // // //             // 000
// // // // //             // 001
// // // // //             // 010
// // // // //             // 011
// // // // //             // 100
// // // // //             // 101
// // // // //             // 110
// // // // //             // 111

// // // // // // 8. Count number of ways to reach nth stair when you can hop 1 or 2 steps
// // // // // // 9. Find minimum element in array using recursion
// // // // // // 10. Reverse a string using recursion
// // // // // // 11. Print all possible phone keypad combinations for a given number
// // // // // // 12. Find length of string using recursion without using strlen()
// // // // // // 13. Remove duplicates from string using recursion
// // // // // // 14. Tower of Hanoi problem
// // // // // // 15. Print all possible balanced parentheses combinations for n pairs

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // void print(vector<int> nums, int start, int end)
// // // // // {
// // // // //     if (end < start)
// // // // //     {
// // // // //         return;
// // // // //     }

// // // // //     cout << nums[end] << " ";

// // // // //     print(nums, start, end - 1);
// // // // // }

// // // // // void sum(int number, int ans)
// // // // // {

// // // // //     if (number <= 0)
// // // // //     {
// // // // //         cout << ans;
// // // // //         return;
// // // // //     }

// // // // //     ans += number % 10;
// // // // //     number = number / 10;
// // // // //     sum(number, ans);
// // // // // }

// // // // // void digit(int number, int ans)
// // // // // {
// // // // //     if (number <= 0)
// // // // //     {
// // // // //         cout << ans;
// // // // //         return;
// // // // //     }
// // // // //     ans += 1;
// // // // //     number = number / 10;

// // // // //     digit(number, ans);
// // // // // }

// // // // // void bs(vector<int> nums, int start, int end, int target)
// // // // // {
// // // // //     int mid = start + (end - start) / 2;
// // // // //     if (target == mid)
// // // // //     {
// // // // //         cout << mid << " " << endl;

// // // // //         cout << "ans exists";
// // // // //         return;
// // // // //     }
// // // // //     if (target > mid)
// // // // //     {
// // // // //         bs(nums, mid + 1, end, target);
// // // // //     }
// // // // //     if (target < mid)
// // // // //     {
// // // // //         bs(nums, start, mid - 1, target);
// // // // //     }
// // // // // }

// // // // // int gcd(int a, int b)
// // // // // {
// // // // //     // Everything divides 0
// // // // //     if (a == 0)
// // // // //         return b;
// // // // //     if (b == 0)
// // // // //         return a;

// // // // //     // If both numbers are equal
// // // // //     if (a == b)
// // // // //         return a;

// // // // //     // If a is greater
// // // // //     if (a > b)
// // // // //         return gcd(a - b, b);

// // // // //     // If b is greater
// // // // //     return gcd(a, b - a);
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     vector<int> nums = {1, 2, 3, 4};
// // // // //     // print(nums, 0, nums.size() - 1);
// // // // //     int num = 12345;
// // // // //     // sum(num, 0);
// // // // //     // digit(num, 0);

// // // // //     // bs(nums, 0, nums.size() - 1, 1);
// // // // //     cout << gcd(16, 12) << endl;
// // // // // }

// // // // // #include <bits/stdc++.h>

// // // // // using namespace std;

// // // // // void print(int n, string ans)
// // // // // {
// // // // //     if (ans.size() == n)
// // // // //     {
// // // // //         cout << ans << endl;
// // // // //         return;
// // // // //     }
// // // // //     print(n, ans + '0');
// // // // //     print(n, ans + '1');
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     int n;
// // // // //     cin >> n;

// // // // //     string ans = "";

// // // // //     print(n, ans);
// // // // // }

// // // // // // 8. Count number of ways to reach nth stair when you can hop 1 or 2 steps

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // int print(int n)
// // // // // {
// // // // //     if (n == 1)
// // // // //     {
// // // // //         return 1;
// // // // //     }
// // // // //     if (n < 0)
// // // // //     {
// // // // //         return 0;
// // // // //     }
// // // // //     return print(n - 1) + print(n - 2);
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     int n;
// // // // //     cin >> n;

// // // // //     cout << print(n);
// // // // // }

// // // // // // 9. Find minimum element in array using recursion
// // // // // // 10. Reverse a string using recursion
// // // // // // 11. Print all possible phone keypad combinations for a given number
// // // // // // 12. Find length of string using recursion without using strlen()
// // // // // // 13. Remove duplicates from string using recursion
// // // // // // 14. Tower of Hanoi problem
// // // // // // 15. Print all possible balanced parentheses combinations for n pairs

// // // // //  9. Find minimum element in array using recursion

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // int print(vector<int> &nums, int ans, int start)
// // // // // {
// // // // //     if (nums.size() - 1 <= start)
// // // // //     {
// // // // //         return ans;
// // // // //     }
// // // // //     if (ans > nums[start])
// // // // //     {
// // // // //         ans = nums[start];
// // // // //     }
// // // // //     return print(nums, ans, start + 1);
// // // // // }

// // // // // int main()
// // // // // {
// // // // //     vector<int> nums = {10, 2, 32};

// // // // //     int ans = INT_MAX;
// // // // //     cout << print(nums, ans, 0);
// // // // // }

// // // // // //..10. Reverse a string using recursion

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;

// // // // // void print(string &str, int n, int start)
// // // // // {
// // // // //     if (n < start)
// // // // //     {
// // // // //         return;
// // // // //     }
// // // // //     cout << str[n];
// // // // //     print(str, n - 1, start);
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     string str = "abcdef";

// // // // //     print(str, str.size() - 1, 0);
// // // // //     cout << endl;
// // // // // }

// // // // // Print all possible phone keypad combinations for a given number

// // #include <bits/stdc++.h>

// // using namespace std;

// // void print(string num, string ans, int len, int start)
// // {
// //     if (ans.size() == 3)
// //     {
// //         cout << ans << endl;
// //         return;
// //     }
// //     for (int i = start; i < num.size(); i++)
// //     {
// //         ans.push_back(num[i]);
// //         print(num, ans, len, i + 1);
// //         ans.pop_back();
// //     }
// // }

// // int main()
// // {
// //     vector<string> str = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// //     // int number = 23;

// //     string num = "";
// //     num = num + str[2];
// //     num = num + str[3];
// //     num = num + str[6];

// //     string ans = "";
// //     print(num, ans, 2, 1);

// //     // cout << num << endl;
// // }

// // // // ****
// // // // ***
// // // // **
// // // // // *

// // // // #include <bits/stdc++.h>
// // // // using namespace std;

// // // // void print(int row, int col)
// // // // {
// // // //     if (row == 0)
// // // //     {
// // // //         return;
// // // //     }
// // // //     if (col < row)
// // // //     {
// // // //         cout << "*";
// // // //         print(row, col + 1);
// // // //     }
// // // //     else
// // // //     {
// // // //         cout << endl;
// // // //         print(row - 1, 0);
// // // //     }
// // // // }

// // // // int main()
// // // // {
// // // //     int row = 5;
// // // //     int col = 5;
// // // //     print(row, col);
// // // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // vector<vector<int>> helper(int n, int k, vector<vector<int>> ans)
// // // {
// // //     vector<int> temp;
// // //     if (temp.size() == k)
// // //     {
// // //         ans.push_back(temp);
// // //         return ans;
// // //     }

// // //     for (int i = 1; i <= n; i++)
// // //     {
// // //         temp.push_back(i);
// // //         helper(n, k, ans);
// // //         temp.pop_back();
// // //     }
// // //     return helper(n, k, ans);
// // // }

// // // int main()
// // // {
// // //     int n = 4;
// // //     int k = 2;

// // //     vector<vector<int>> ans;
// // //     ans = helper(n, k, ans);

// // //     for (int i = 0; i < ans.size(); i++)
// // //     {
// // //         for (int j = 0; j < ans.size(); j++)
// // //         {
// // //             cout << ans[i][j] << " ";
// // //         }
// // //         cout << endl;
// // //     }
// // // }

// permutations :

// 1 2 3
// 1 3 2
// 2 3 1
// 2 1 3
// 3 1 2
// 3 2 1

#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

void generatePermutationsSwap(vector<int> &nums, int index)
{
    // Base case: If we've reached the end of the vector,
    // we have a complete permutation.
    if (index == nums.size())
    {
        for (int val : nums)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // Recursive step: Fix an element at the current 'index' and recurse.
    for (int i = index; i < nums.size(); i++)
    {
        // Place the i-th element at the current index.
        swap(nums[index], nums[i]);

        // Recurse to generate permutations for the rest of the vector.
        generatePermutationsSwap(nums, index + 1);

        // Backtrack: Swap them back to restore the original state for the next iteration.
        swap(nums[index], nums[i]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3,4,5,6,7,8,9,0};
    cout << "Generating permutations using the swapping method:" << endl;
    generatePermutationsSwap(nums, 0); // Start the process from index 0
    return 0;
}