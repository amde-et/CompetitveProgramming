class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        {
    int cnt=0;
    vector<int>ans;
	
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]>nums[j])
            cnt++;
        }
        ans.push_back(cnt);
        cnt=0;
    }
    return ans;
}
        
    }
};
