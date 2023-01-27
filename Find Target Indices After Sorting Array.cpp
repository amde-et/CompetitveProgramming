class Solution {
public:

// finding first occurrence of the target

    int firstOccu(vector<int> nums,int target){
        int n=nums.size();
        int start=0,end=n-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return res;
    }
    
//  i am a true c++ lover look at this art  , long lines still amazing
	
    int LastOccu(vector<int> nums,int target){
        int n=nums.size();
        int start=0,end=n-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return res;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target){
	
        sort(nums.begin(),nums.end());
        int first=firstOccu(nums,target);
        int last=LastOccu(nums,target);
		
        vector<int> ans;
		
        if(first!=-1 && last!=-1){
            for(int i=first;i<=last;i++){  
                ans.push_back(i);
            }
        }
		
        return ans;
    }
};
