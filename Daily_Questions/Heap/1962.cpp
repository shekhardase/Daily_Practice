https : // leetcode.com/problems/remove-stones-to-minimize-the-total/description/
        class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq;
        for (int i = 0; i < piles.size(); i++)
        {
            pq.push(piles[i]);
        }

        while (k--)
        {
            int ele = pq.top();
            pq.pop();
            pq.push(ele - (ele / 2));
        }

        int newcount = 0;
        while (!pq.empty())
        {
            newcount += pq.top();
            pq.pop();
        }
        return newcount;
    }
};