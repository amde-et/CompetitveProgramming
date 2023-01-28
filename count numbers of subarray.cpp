class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int n = nums.size(), l=0, r=0, cnt=0, ans=0;
        vector<int> nxt_odd(n);
        int odd = n;
        for(int i=n-1;i>=0;i--)
        {
            nxt_odd[i]=odd;
            if(nums[i]&1)odd=i;
        }
        while(r<n)
        {
            cnt += (nums[r]&1);
            while(cnt == k)
            {
                ans += (nxt_odd[r]-r);
                cnt -= (nums[l++]&1);
            }
            r++;
        }
        return ans;
    }
};
