class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int x : nums)
            map[x]++;

        int len = 0;
        for (int x : nums)
            {
             if (!map.count(x))
                continue;

            map.erase(x);
            int prevx = x - 1;
            int nextx = x + 1;

        while (map.count(prevx))
            map.erase(prevx--);
        while (map.count(nextx))
            map.erase(nextx++);

        len = max(len, nextx - prevx - 1);
    }

    return len;
}
};

//https://leetcode.com/problems/longest-consecutive-sequence/
//O(n)
