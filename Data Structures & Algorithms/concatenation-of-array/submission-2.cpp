class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        int l =0, r = n;
        while(l<n){
            ans[l]=nums[l];
            ans[r]=nums[l];
            l++;
            r++;
        }
    
        
        return ans;
    }
};