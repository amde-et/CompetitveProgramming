class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int j =0; 
        int count =0;
        int ans =0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0)
                count++;
            if(count > k){
                while(nums[j] != 0){
                    j++;
                }
                j++;
                count--;
            }
            
            ans = max(ans, i-j+1);
            
        }
        return ans;
    }
};
