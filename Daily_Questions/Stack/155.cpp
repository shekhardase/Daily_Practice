// // // https://leetcode.com/problems/min-stack/
// // // class MinStack
// // // {
// // //     public:
// // //     stack<int> st;
// // //         MinStack()
// // //         {

// // //         }

// // //     void push(int val)
// // //     {
// // //         st.push(val);
// // //     }

// // //     void pop()
// // //     {
// // //         if (!st.empty())
// // //         {
// // //             st.pop();
// // //         }
// // //     }

// // //     int top()
// // //     {
// // //         if (!st.empty())
// // //         {
// // //             return st.top();
// // //         }
// // //         else
// // //         {
// // //             return 0;
// // //         }
// // //     }

// // //     int getMin()
// // //     {
// // //         stack<int> temp = st;
// // //         int mini = INT_MAX;
// // //         while (!temp.empty())
// // //         {
// // //             mini = min(temp.top(), mini);
// // //             temp.pop();
// // //         }
// // //         return mini;
// // //     }
// // // };

// // // /**
// // //  *Your MinStack object will be instantiated and called as such:
// // //  *MinStack* obj = new MinStack();
// // //  *obj->push(val);
// // //  *obj->pop();
// // //  *int param_3 = obj->top();
// // //  *int param_4 = obj->getMin();
// // //  */

// // #include <vector>
// // #include <limits.h>

// // class MinStack
// // {
// //     public:
// //         std::vector<int> st;

// //     MinStack() {}

// //     void push(int val)
// //     {
// //         st.push_back(val);
// //     }

// //     void pop()
// //     {
// //         if (!st.empty())
// //         {
// //             st.pop_back();
// //         }
// //     }

// //     int top()
// //     {
// //         if (!st.empty())
// //         {
// //             return st.back();
// //         }
// //         else
// //         {
// //             return -1;	// Return -1 or an appropriate value to indicate the stack is empty
// //         }
// //     }

// //     int getMin()
// //     {
// //         if (st.empty())
// //         {
// //             return INT_MAX;	// Return a large value or handle it appropriately when the stack is empty
// //         }

// //         int mini = st[0];	// Initialize mini to the first element of the stack
// //         for (int i = 1; i < st.size(); i++)
// //         {
// //             mini = std::min(mini, st[i]);
// //         }
// //         return mini;
// //     }
// // };

// // /**
// //  *Your MinStack object will be instantiated and called as such:
// //  *MinStack* obj = new MinStack();
// //  *obj->push(val);
// //  *obj->pop();
// //  *int param_3 = obj->top();
// //  *int param_4 = obj->getMin();
// //  */

// #include <stack>

// class MinStack {
// private:
//     std::stack<int> stack;
//     std::stack<int> minStack;

// public:
//     MinStack() {}

//     void push(int val) {
//         stack.push(val);
//         // Push the new minimum onto the minStack
//         if (minStack.empty() || val <= minStack.top()) {
//             minStack.push(val);
//         }

//     }

//     void pop() {
//         if (stack.top() == minStack.top()) {
//             minStack.pop();
//         }
//         stack.pop();
//     }

//     int top() {
//         return stack.top();
//     }

//     int getMin() {
//         return minStack.top();
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */
