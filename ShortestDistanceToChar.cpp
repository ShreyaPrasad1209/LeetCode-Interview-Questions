class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        unordered_map<int, char>m;
        vector<int>ans;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                m[i]=c;
            }
        }
        
        
        for(int i=0;i<s.length();i++)
        {
           int min_val=INT_MAX;
           for(auto it=m.begin();it!=m.end();it++)
           {
               int f= abs(it->first - i);
               min_val=min(min_val, f);
           }
            ans.push_back(min_val);
        }
        
        return ans;
    }
};
