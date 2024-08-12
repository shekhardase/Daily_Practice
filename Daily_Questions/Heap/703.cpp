// https://leetcode.com/problems/kth-largest-element-in-a-stream/description/?envType=daily-question&envId=2024-08-12

// class KthLargest
// {
//     public:
//         priority_queue<int, vector < int>, greater < int>> pq;
//     int K;
//     KthLargest(int k, vector<int> &nums)
//     {
//         K = k;
//         for (int &num: nums)
//         {
//             pq.push(num);

//             if (pq.size() > k)
//             {
//                 pq.pop();
//             }
//         }
//     }

//     int add(int val)
//     {
//         pq.push(val);

//         if (pq.size() > K)
//         {
//             pq.pop();
//         }
//         return pq.top();	// correct . valid call
//     }
// };

// /**
//  *Your KthLargest object will be instantiated and called as such:
//  *KthLargest* obj = new KthLargest(k, nums);
//  *int param_1 = obj->add(val);
//  */