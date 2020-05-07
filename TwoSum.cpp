class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            int x;
            x = target-nums[i];
            auto itr = map.find(x);
            if(itr != map.end()){
                res.push_back(i);
                res.push_back(itr->second);
            }
            map[nums[i]]=i;
        }
        return res;
    }
};

//https://leetcode.com/problems/two-sum/
//O(n)
