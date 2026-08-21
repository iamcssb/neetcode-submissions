class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Store value + original index
        vector<pair<int,int>> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back({nums[i], i});
        }

        // Step 2: Sort by value
        sort(arr.begin(), arr.end());

        // Step 3: Two-pointer search
        int l = 0, r = arr.size()-1;
        while(l < r){
            int sum = arr[l].first + arr[r].first;
            if(sum == target){
                return {min(arr[l].second, arr[r].second),
                max(arr[l].second,arr[r].second)}; // return original indices
            } else if(sum < target){
                l++;
            } else {
                r--;
            }
        }
        return {};
    }
};
