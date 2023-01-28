class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
      
        deque<int> mn,mx;
        int n = nums.size();
        int i = 0,j = 0;
        int ans = 0;
        while(j<n)
        {
            int x = nums[j];
            
           
            while(mn.size() and nums[mn.back()]>x)mn.pop_back();
            
           
            while(mx.size() and nums[mx.back()]<x)mx.pop_back();
            
            mn.push_back(j);
            mx.push_back(j);
            
            if(nums[mx.front()]-nums[mn.front()]>limit)
            {
                i++;
                if(mn.front()<i)mn.pop_front();
                if(mx.front()<i)mx.pop_front();
            }
            else
            {
                ans = max(ans,j-i+1);
            }
            j++;
        }
        return ans;
        
    }
};
