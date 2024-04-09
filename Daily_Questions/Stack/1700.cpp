// // https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/?envType=daily-question&envId=2024-04-08

// // Approach 1 - Simple simulation as question asked

// // class Solution {
// // public:
// //     int countStudents(vector<int>& students, vector<int>& sandwiches) {
// //         // Create a queue to hold the students' preferences
// //         queue<int> que;

// //         // Create a stack to hold the sandwiches' order
// //         stack<int> st;

// //         // Iterate through the students and sandwiches arrays
// //         for (int i = 0; i < students.size(); i++) {
// //             // Add the sandwiches' order to the stack in reverse order
// //             st.push(sandwiches[students.size() - i - 1]);
// //             // Add the students' preference to the queue
// //             que.push(students[i]);
// //         }

// //         // Initialize a variable to keep track of the number of students
// //         // who have not been served
// //         int lastServed = 0;

// //         // Loop through the queue and stack until all students have been served
// //         while (!que.empty() && lastServed < que.size()) {
// //             // If the top of the stack matches the front of the queue
// //             if (st.top() == que.front()) {
// //                 // Remove the top element from the stack and the front element
// //                 // from the queue
// //                 st.pop();
// //                 que.pop();
// //                 // Reset the lastServed variable
// //                 lastServed = 0;
// //             } else {
// //                 // If the top of the stack does not match the front of the queue
// //                 // Move the front element of the queue to the back of the queue
// //                 // and increment the lastServed variable
// //                 que.push(que.front());
// //                 que.pop();
// //                 lastServed++;
// //             }
// //         }

// //         // Return the number of students who have not been served
// //         return que.size();
// //     }
// // };

// // Appraoch 2 - Use count and Stack

// class Solution
// {
// public:
//     int countStudents(vector<int> &students, vector<int> &sandwiches)
//     {
//         int n = students.size();
//         int countCircular = 0;
//         int countSquare = 0;

//         // Count the number of students who like circular and square sandwiches
//         for (int student : students)
//         {
//             if (student == 0)
//             {
//                 countCircular++;
//             }
//             else
//             {
//                 countSquare++;
//             }
//         }

//         // Iterate through the sandwiches and serve students based on their preferences
//         for (int i = 0; i < n; i++)
//         {
//             if (sandwiches[i] == 0)
//             {
//                 if (countCircular == 0)
//                 {
//                     // Return the remaining unserved students
//                     return n - i;
//                 }
//                 countCircular--;
//             }
//             else
//             {
//                 if (countSquare == 0)
//                 {
//                     // Return the remaining unserved students
//                     return n - i;
//                 }
//                 countSquare--;
//             }
//         }

//         // All students have been served
//         return 0;
//     }
// };