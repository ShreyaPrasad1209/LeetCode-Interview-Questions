class Solution {
public:
    int numRabbits(vector<int>& answers) {
       map<int,int>freq; 
       int sum=0; 
        
       for(int x: answers)
       {
           freq[x]++;
       }
        
       for(auto it=freq.begin();it!=freq.end();it++)
       {
           int gs=it->first+1;
           int rep=it->second;
           int grp = (int)ceil(rep*1.0/gs*1.0);
           sum+=(grp*gs);
       }
        return sum;
    }
};

//Link: https://leetcode.com/problems/rabbits-in-forest/
//Time Complexity: O(n)
//Space Complexity: O(n)
