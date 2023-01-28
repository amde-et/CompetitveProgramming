class Solution {
public:
  int shortestSubarray(vector<int>& A, int k) {
        int n = A.size();
        int ans = n+1;
        vector<long long> nums(n);
        deque<int> Pre;
        for(int i = 0 ; i < n ; i++){
            nums[i] = A[i];
            if(i) nums[i] += nums[i-1];
            if(nums[i] >= k){
                ans = min(ans,i+1);
            }
            while(!Pre.empty() && nums[i] - nums[Pre.front()] >= k){
                ans = min(ans,i-Pre.front());
                Pre.pop_front();
            }
            while(!Pre.empty() && nums[Pre.back()] >= nums[i]){
                Pre.pop_back();
            }
            Pre.push_back(i);
        }
        return (ans == n+1)?-1:ans;
    }

};
