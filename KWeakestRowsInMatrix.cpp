class Solution {
public:
    
    static bool cmp(pair<int,int>& a, pair<int,int>&b)
    {
           if(a.second==b.second)
           {
               return a.first < b.first;
           }
       
            return a.second < b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int>m;
        int row=mat.size();
        for(int i=0;i<row;i++)
        {
            int freq=count(mat[i].begin(), mat[i].end(), 1);
            m[i]=freq;
        }
        
        vector<pair<int,int>>ans(m.begin(),m.end());
        
        sort(ans.begin(), ans.end(), cmp);
        
        vector<int>res;
        
        for(int i=0;i<k;i++)
        {
            res.push_back(ans[i].first);
        }
        
        return res;
    }
};
