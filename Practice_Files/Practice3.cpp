#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> &nums, vector<int> &curr, int index)
{
    // Base case: when index reaches the end of the array
    if (index == nums.size())
    {
        // Print the current subset
        for (int num : curr)
        {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // Recursive case 1: include the current element in the subset
    curr.push_back(nums[index]);

    subset(nums, curr, index + 1);
    
    curr.pop_back(); // Backtrack

    // Recursive case 2: exclude the current element from the subset
    subset(nums, curr, index + 1);
}

int main()
{
    vector<int> nums = {3,2,1};
    vector<int> curr;
    subset(nums, curr, 0);
    return 0;
}