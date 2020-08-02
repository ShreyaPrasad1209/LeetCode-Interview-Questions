class Solution {
public:
    int maxProduct(vector<int>& a) {   
        int n = a.size();
        int maxval = a[0];
        int minval = a[0];
        int prod = a[0];
        for (int i = 1; i<n; i++) {
            if (a[i] < 0) {
                swap(maxval, minval);
            }
            maxval = max(a[i], maxval*a[i]);
            minval = min(a[i], minval*a[i]);
            prod = max(prod, maxval);
        }
        return prod;
    }
};

//LeetCode Link: https://leetcode.com/problems/maximum-product-subarray/
