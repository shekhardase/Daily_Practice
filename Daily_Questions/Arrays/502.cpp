// // https://leetcode.com/problems/ipo/description/?envType=daily-question&envId=2024-06-15

// class Solution
// {
//     public:
//         int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
//         {
//             int n = profits.size();
//             vector<pair<int, int>> projects(n);

//             for (int i = 0; i < n; i++)
//             {
//                 projects[i] = { capital[i],
//                     profits[i]
//                 };
//             }

//            	// Sort projects by their capital requirements
//             sort(projects.begin(), projects.end());

//            	// Max-heap to store the profitable projects we can currently start
//             priority_queue<int> maxHeap;
//             int index = 0;

//             for (int i = 0; i < k; i++)
//             {
//                	// Push all projects that can be started with current capital into the max-heap
//                 while (index < n && projects[index].first <= w)
//                 {
//                     maxHeap.push(projects[index].second);
//                     index++;
//                 }

//                	// If no project can be started, break
//                 if (maxHeap.empty())
//                 {
//                     break;
//                 }

//                	// Select the most profitable project we can start
//                 w += maxHeap.top();
//                 maxHeap.pop();
//             }

//             return w;
//         }
// };