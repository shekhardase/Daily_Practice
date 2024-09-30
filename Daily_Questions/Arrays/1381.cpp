// https://leetcode.com/problems/design-a-stack-with-increment-operation/?envType=daily-question&envId=2024-09-30

// class CustomStack {
// public:
//     int size;
//     vector<int> arr;
//     CustomStack(int maxSize) {
//         size = maxSize;
//         // arr.size() = maxSize;
//     }

//     void push(int x) {
//         if (arr.size() < size) {
//             arr.push_back(x);
//         }
//     }

//     int pop() {
//         if (!arr.empty()) {
//             int ele = arr[arr.size() - 1];
//             arr.pop_back();
//             return ele;
//         }

//         return -1;
//     }

//     void increment(int k, int val) {
//         if (arr.size() < k) {
//             for (int i = 0; i < arr.size(); i++) {
//                 arr[i] = arr[i] + val;
//             }
//         } else {
//             for (int i = 0; i < k; i++) {
//                 arr[i] = arr[i] + val;
//             }
//         }
//     }
// };

// /**
//  *Your CustomStack object will be instantiated and called as such:
//  *CustomStack* obj = new CustomStack(maxSize);
//  *obj->push(x);
//  *int param_2 = obj->pop();
//  *obj->increment(k,val);
//  */