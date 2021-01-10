class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        vector<pair<float,int>>res;
        
        for(int i=0;i<points.size();i++)
        {
            float x = pow((points[i][0]),2);
            float y = pow((points[i][1]),2);
            res.push_back(make_pair(sqrt(x+y), i));
        }
        
        vector<vector<int>>ans;
        sort(res.begin(),res.end());
        
        for(int i=0;i<K;i++)
        {
            ans.push_back(points[res[i].second]);
        }
        
        return ans;
        
    }
};

//Link:https://leetcode.com/problems/k-closest-points-to-origin/
//Time Complexity: O(n)
//Space Complexity: O(n)
