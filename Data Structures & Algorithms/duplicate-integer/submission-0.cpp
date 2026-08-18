class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> noDuplicate(nums.begin(), nums.end());
      return noDuplicate.size() < nums.size();  
    }
};
