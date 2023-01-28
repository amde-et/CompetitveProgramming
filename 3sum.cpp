class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         
        unordered_map<int, int>mp;
        const unsigned int M = 1000000007;
        int n=arr.size(), count=0;
        for(int i=2; i<n ; i++){
            for(int j=0 ; j<=i-2 ; j++){
                mp[arr[j]+arr[i-1]]++;
            }
            if(mp.count(target-arr[i])==1){
                count=count%M;
                mp[target-arr[i]]=(mp[target-arr[i]])%M;
                count=(((count+mp[target-arr[i]])%M)+ M)%M;
            }
        }
        return count;
        
    }
};
