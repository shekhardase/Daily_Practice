// https://leetcode.com/problems/find-the-punishment-number-of-an-integer/submissions/1545887152/?envType=daily-question&envId=2025-02-15  


// class Solution
// {
// public:
//     bool check(int i, int currentsum, string s, int num)
//     {
//         if (i == s.length())
//         {
//             return currentsum == num;
//         }
//         if (currentsum > num)
//         {
//             return false;
//         }

//         bool possible = false;
//         for (int j = i; j < s.length(); j++)
//         {
//             string sub = s.substr(i, j - i + 1);
//             int val = stoi(sub);

//             possible = possible || check(j + 1, currentsum + val, s, num);

//             if (possible == true)
//             {
//                 return true;
//             }
//         }
//         return possible;
//     }

//     int punishmentNumber(int n)
//     {
//         int count = 0;
//         for (int num = 1; num <= n; num++)
//         {
//             int sq = num * num;
//             string s = to_string(sq);

//             if (check(0, 0, s, num) == true)
//             {
//                 count += sq;
//             }
//         }
//         return count;
//     }
// };
