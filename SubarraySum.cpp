class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if (m.find(sum - k) != m.end())
                count += m[sum - k];
            m[sum]++;
        }
        return count;
    }
};

//Link: https://leetcode.com/problems/subarray-sum-equals-k/
//Time Complexity: O(n) 
//Space: O(n)
