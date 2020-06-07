class Solution {
public:
    
        int candy(vector<int>& ratings) {
 int n=ratings.size();int count=0;
 vector<int>candies(n,1);
 for(int i=1;i<n;i++)
 {
     if(ratings[i]>ratings[i-1]) candies[i]=candies[i-1]+1;
 }
 count+=candies[n-1];
 for(int i=n-2;i>=0;i--)
 {
     if(ratings[i]>ratings[i+1]) candies[i]=max(candies[i],candies[i+1]+1);
     count+=candies[i];
 }
return count;

    }
};

//LeetCode Link: https://leetcode.com/problems/candy/
//Time Complexity: O(n)
