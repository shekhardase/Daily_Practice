// // https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=daily-question&envId=2024-04-24

// class Solution
// {
//     public:
//         int tribonacci(int n)
//         {
//             if (n == 0)
//             {
//                 return 0;
//             }

//             if (n == 1 || n == 2)
//             {
//                 return 1;
//             }

//             int t1 = 0, t2 = 1, t3 = 1;	// intialziing base variables

//             for (int i = 3; i <= n; i++)
//             {
//                 int tn = t1 + t2 + t3;	// sum of all var to make target sum

//                	// updating values so that it reaches target

//                 t1 = t2;   cout<<t1<<endl;
//                 t2 = t3;   cout<<t2<<endl;
//                 t3 = tn;   cout<<t3<<endl;
//             }
//             return t3;
//         }
// };