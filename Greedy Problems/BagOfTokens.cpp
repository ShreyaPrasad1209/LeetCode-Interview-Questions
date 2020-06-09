class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int points=0,maxPoints=0;
        sort(tokens.begin(),tokens.end());
        
        int i=0;
        int j=tokens.size()-1;
        while(i<=j)
        {
            if(P>=tokens[i])
            {
               P=P-tokens[i++];
               points++;
               maxPoints=max(points,maxPoints); 
            }
            else if(points>0)
            {
                P=P+tokens[j--];
                points--;
            }
            else
            {
                return maxPoints;
            }
        }
        return maxPoints;
    }
};

//TC: O(nlogn)
//Link: https://leetcode.com/problems/bag-of-tokens/
