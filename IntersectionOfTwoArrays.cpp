class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        vector<int> res;
        
        for(int i =0; i<nums1.size(); i++){
            map1[nums1[i]] = i;
        }
        for(int i =0; i<nums2.size(); i++){
            map2[nums2[i]] = i;
        }
        for(auto i: map1){
            int x = i.first;
            auto itr = map2.find(x);
            if(itr!= map2.end()){
                res.push_back(x);
            }
        }
        return res;
    }
};

//https://leetcode.com/problems/intersection-of-two-arrays/
//O(n)
