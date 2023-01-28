class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        if(n<3)
            return 0;
        for(int i=0; i<n; i++)
        {
            if(i+1<n && arr[i+1]>arr[i])
            {
                int left=0, right=0;
                while(i+1<n and arr[i+1]>arr[i])
                {
                    left++;
                    i++;
                }
                while(i+1<n and arr[i+1]<arr[i])
                {
                    right++;
                    i++;
                }
                if(right!=0){
                    ans = max(ans, right+left+1);
                    i--;
                }
            }
        }
        return ans;
    }
};
