class Solution {
public:
    int solve(vector<int>& nums, int i, int j)
    {
        if(i>j) return 0;
        int option1 = nums[i] + min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int option2 = nums[j] + min(solve(nums,i,j-2),solve(nums,i+1,j-1));
        
        return max(option1,option2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int optimalscore = solve(nums,0, n-1);
        if(optimalscore>=sum-optimalscore) return true;
        else return false;
    }
};
