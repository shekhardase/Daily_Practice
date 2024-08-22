// https://leetcode.com/problems/number-complement/description/?envType=daily-question&envId=2024-08-22

// class Solution
// {
//     public:
//         int findComplement(int num)
//         {
//            	// Edge case for 0, since the complement of 0 in binary (which is 1) is simply 1
//             if (num == 0) return 1;

//            	// Create a mask with all bits set to 1 that is as long as the binary representation of num
//             int mask = 0;
//             int temp = num;

//             while (temp > 0)
//             {
//                 mask = (mask << 1) | 1;
//                 temp >>= 1;
//             }

//            	// XOR num with mask to get the complement
//             return num ^ mask;
//         }
// };