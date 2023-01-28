class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(0);
        }
        for(int i=0;i<bookings.size();i++){
              ans[bookings[i][0]-1]+=bookings[i][2];
              if(bookings[i][1]<n){
                  ans[bookings[i][1]]-=bookings[i][2];
              }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ans[i];
            ans[i]=sum;
        }
        return ans;
    }
};
