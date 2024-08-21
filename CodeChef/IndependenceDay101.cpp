// https://www.codechef.com/problems/INDEPENDENCE

// Problem: Independence Day 101
// Chef wants to design a new flag for the country of Chefland using equal-sized strips in three different colors: orange, white, and green. He needs to arrange the strips in a line so that no two adjacent strips share the same color.
// Input Format:
// The first line of input contains a single integer T, denoting the number of test cases.
// Each test case consists of three space-separated integers A, B, and C:
// A: Number of orange strips.
// B: Number of white strips.
// C: Number of green strips.
// Output Format:
// For each test case, output "YES" if it is possible to design the flag such that no two adjacent strips share the same color, otherwise output "NO".
// The output can be in any case (e.g., YES, yes, Yes).
// Example:
// Input:
// 3
// 2 2 2
// 1 2 1
// 3 3 1
// Output:
// objectivec
// YES
// YES
// NO

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int greatest = max(a, max(b, c));
        int remaining = (a + b + c) - greatest;
        if (remaining + 1 >= greatest)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
    }
}
