class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0;
        int n=arr.size();
        int ans=0;
        int sum=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1==k){
                int avg=sum/k;
                if(avg>=threshold) ans++;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return ans;
    }
};
