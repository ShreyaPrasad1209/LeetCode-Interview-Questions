class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        vector<int> res;
        
        for(int i =0; i<nums1.size(); i++){
            map1[nums1[i]]++;
        }
        for(int i =0; i<nums2.size(); i++){
            map2[nums2[i]]++;
        }
        for(int i =0; i<nums1.size(); i++){
            int x = nums1[i];
            auto itr = map2.find(x);
            if(itr!= map2.end() && itr->second!=0){
                res.push_back(x);
                itr->second -= 1;
            }
        }
        return res;
    }
};

//https://leetcode.com/problems/intersection-of-two-arrays-ii/
//O(n)
