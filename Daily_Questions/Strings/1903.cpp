//     // https://leetcode.com/problems/largest-odd-number-in-string/post-solution/?submissionId=1239630046

//     class Solution
// {
//     public:
//        	// Function to find the largest odd number from the given string
//         string largestOddNumber(string num)
//         {
//             int n = num.size();	// Get the size of the input string

//            	// Check if the last digit of the number is even
//             if (num[n - 1] % 2 != 0)
//             {
//                 return num;	// If it's even, return the original number as it cannot
//                	// be odd
//             }

//            	// If the last digit is odd, start iterating from the end of the string
//             for (int i = n - 1; i >= 0; i--)
//             {
//                	// Check if the current digit is even
//                 if (num[i] % 2 != 0)
//                 {
//                    	// If it's even, return the substring from the beginning of the
//                    	// string to this digit
//                     return num.substr(0, i + 1);
//                 }
//             }
//            	// If no odd digit is found, return an empty string
//             return "";
//         }
// };