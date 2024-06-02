// https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/description/
// class Solution {
// public int minimumChairs(String s) {
// int c=0;
// int ans=Integer.MIN_VALUE;
// for(char i:s.toCharArray()){
// if(i=='E'){
// c++;
// }
// else{
// c--;
// }
// ans=Math.max(ans,c);
// // c=ans;
// }
// return ans;
// }
// }