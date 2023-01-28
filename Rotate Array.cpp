class Solution {
public:
	void rotatePart(vector<int>& nums,int low,int high)
	{
		while(low<high)
		{
			swap(nums[low],nums[high]);
			low++;
			high--;
		}
	}
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
        rotatePart(nums,n-k,n-1);
        rotatePart(nums,0,n-k-1);
        rotatePart(nums,0,n-1);
    }
};
