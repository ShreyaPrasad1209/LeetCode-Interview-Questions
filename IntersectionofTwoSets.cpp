#include <iostream>  
#include <set>  
#include <list>  
#include <vector>  
#include <algorithm>  
#include <iterator> 

class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        set<int>first;
        set<int>second;
    
        for(int i=0;i<dislikes[0].size();i++)
        {
            first.insert(dislikes[0][i]);
        }
            
        for(int i=0;i<dislikes.size();i++)
        {
            second.insert(dislikes[i][0]);
        }
        
        set<int> intersect;
         set_intersection(first.begin(),first.end(),second.begin(),second.end(),
                  std::inserter(intersect,intersect.begin()));
    
      return false?(!intersect.empty()):true;    
    }
};
