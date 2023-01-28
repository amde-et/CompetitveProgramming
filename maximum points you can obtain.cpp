class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum = 0;
        
        for(auto i : cardPoints)
            total_sum += i;
        
        int window = 0;
        int n = cardPoints.size();
        int left = 0;
        int right = n - k;
        
        
        if(n==k)
            return total_sum;
        
        
        for(int i=0;i<right;i++)
        {
            window += cardPoints[i];
        }
        int ans = total_sum - window;
        
       
        while(right < n){
            window -= cardPoints[left++];
            window += cardPoints[right++];
            
           
            ans = max(total_sum - window, ans);
        }
        
        return ans;
    }
};
