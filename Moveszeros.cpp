class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                if(i!=k){      
                    nums[i]=0;
                }
                k++;
            }
        }
    }
};
