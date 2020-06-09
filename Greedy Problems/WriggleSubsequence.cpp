class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int up=1, down=1;
        if(!nums.size())
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                up=down+1;
            }
            else if(nums[i]<nums[i-1])
            {
                down=up+1;
            }
        }
        return max(up,down);
    }
};

//Leetcode Link: https://leetcode.com/problems/wiggle-subsequence/
//Runtime: 4ms TC: O(n)
