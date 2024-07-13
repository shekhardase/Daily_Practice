// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     vector<int> nums = {1, 2, 3, 4, 5, 6};

// //     stack<int> st;

// //     for (int i = 0; i < nums.size(); i++)
// //     {
// //         st.push(nums[i]);
// //     }

// //     cout << st.size() << endl;
// // }

// https://leetcode.com/problems/asteroid-collision/description/

// class Solution
// {
//     public:
//         vector<int> asteroidCollision(vector<int> &asteroids)
//         {
//             stack<int> st;

//             for (int &a: asteroids)
//             {

//                 while (!st.empty() && a < 0 && st.top() > 0)
//                 {
//                     int sum = a + st.top();
//                     if (sum < 0)
//                     {
//                         st.pop();
//                     }
//                     else if (sum > 0)
//                     {
//                         a = 0;
//                         break;
//                     }
//                     else
//                     {
//                         st.pop();
//                         a = 0;
//                     }
//                 }

//                 if (a != 0)
//                     st.push(a);
//             }

//             int s = st.size();

//             vector<int> result(s);
//             int i = s - 1;
//             while (!st.empty())
//             {
//                 result[i] = st.top();
//                 st.pop();
//                 i--;
//             }

//             return result;
//         }
// };
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     vector<int> nums = {1, 2, 3, 4, 5, 6};

// //     stack<int> st;

// //     for (int i = 0; i < nums.size(); i++)
// //     {
// //         st.push(nums[i]);
// //     }

// //     cout << st.size() << endl;
// // }

// https://leetcode.com/problems/asteroid-collision/description/

// class Solution
// {
//     public:
//         vector<int> asteroidCollision(vector<int> &asteroids)
//         {
//             stack<int> st;

//             for (int &a: asteroids)
//             {

//                 while (!st.empty() && a < 0 && st.top() > 0)
//                 {
//                     int sum = a + st.top();
//                     if (sum < 0)
//                     {
//                         st.pop();
//                     }
//                     else if (sum > 0)
//                     {
//                         a = 0;
//                         break;
//                     }
//                     else
//                     {
//                         st.pop();
//                         a = 0;
//                     }
//                 }

//                 if (a != 0)
//                     st.push(a);
//             }

//             int s = st.size();

//             vector<int> result(s);
//             int i = s - 1;
//             while (!st.empty())
//             {
//                 result[i] = st.top();
//                 st.pop();
//                 i--;
//             }

//             return result;
//         }
// };