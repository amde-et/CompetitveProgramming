class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           
        int mul = 1;
        bool flag;
        int index =0; 
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] != 0){
                mul = mul *nums[i];
            }
            else{
            flag = true;
            index = i;
            count++;
            }
        }
       
        if(flag == true && count >1){
            for(int i = 0; i<nums.size();i++){
                nums[i] = 0;
            }
            return nums;
        }
        else if(flag == true && count == 1){
            for(int i = 0; i<nums.size();i++){
                nums[i] = 0;
            }
            nums[index] = mul;
            return nums;
        }
      else{
          for(int i =0 ; i<nums.size();i++){
            nums[i] =   (mul/nums[i]);
          }
      }
        
        
        return nums;
    }
};
