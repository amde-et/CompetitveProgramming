class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> prefix=nums;  
        for(int i=1;i<n;i++){
            prefix[i]+=prefix[i-1];
        }
        vector<pair<int,int>> leftMX(n,{-1,INT_MIN});
        vector<pair<int,int>> rightMX(n,{-1,INT_MIN});
        
        int sum=0;
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        leftMX[k-1]={0,sum};
        for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            if(leftMX[i-1].second>=sum){  
                leftMX[i]=leftMX[i-1];
            }
            else{
                leftMX[i]={i-k+1,sum};
            }
        }
        
        sum=0;
        for(int i=n-k;i<n;i++){
            sum+=nums[i];
        }
        rightMX[n-k]={n-k,sum};
        for(int i=n-k-1;i>=0;i--){
            sum+=nums[i]-nums[i+k];
            if(rightMX[i+1].second>sum){  
                rightMX[i]=rightMX[i+1];
            }
            else{  
                rightMX[i]={i,sum};
            }
        }
        
        vector<int> res;
        int mx=0;
        for(int i=k-1;i<n;i++){  
            pair<int,int> invalid={-1,INT_MIN};
            auto [indexS1,sumS1]=(i-k<0 ? invalid : leftMX[i-k]);
            auto [indexS3,sumS3]=(i+1==n ? invalid : rightMX[i+1]);
            if(indexS1==-1 || indexS3==-1){
                continue;
            }
            int sumS2=prefix[i]-prefix[i-k+1]+nums[i-k+1];
            int indexS2=i-k+1;
            if(mx<sumS1+sumS2+sumS3){
                mx=sumS1+sumS2+sumS3;
                res={indexS1,indexS2,indexS3};
            }
        }
        return res;
    }
};
