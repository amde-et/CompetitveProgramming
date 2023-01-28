class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();

        for(int i = 1 ; i < n ; i++){
            nums[i] = nums[i-1] + nums[i];
        }

        for(int i = 0 ; i < n ; i++){
            if(nums[i]-target >= 0){
                int ind = upper_bound(nums.begin(), nums.end(), nums[i]-target) - nums.begin();
                ans = min(ans, i-ind+1);
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};
