class Solution {
public:
    
    int Max_Sum(vector<int>& nums, int firstLen, int secondLen) {
             
        int Left_Sum = 0, Right_Sum = 0;

        for(int i = 0; i < firstLen ; i++) Left_Sum += nums[i];
        for(int i = firstLen ; i < firstLen + secondLen ; i++) Right_Sum += nums[i];
        
        int Left_Max_Till = Left_Sum;
        int  ans = Left_Sum + Right_Sum; 
        
        int i = 0 , j = firstLen , k = firstLen + secondLen;
        
      while(k < nums.size()) {
            
            Left_Sum -= nums[i];
            Left_Sum += nums[j];
            
            Right_Sum -= nums[j];
            Right_Sum += nums[k];
            
             Left_Max_Till = max(Left_Max_Till , Left_Sum);
            
            ans = max(ans , Left_Max_Till + Right_Sum);
            
            i++;
            j++;
            k++;
        }
        
        return ans;
        
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        
      
        
        return max(Max_Sum(nums , firstLen , secondLen) , Max_Sum(nums , secondLen , firstLen));
        
    }
};
