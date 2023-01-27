class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
         vector<bool> ans(l.size(), true);
        for(int i = 0; i < l.size(); i++) {
            if(r[i] - l[i] > 0) {
                vector<int> temp(nums.begin() + l[i], nums.begin() + r[i] + 1);
                sort(temp.begin(), temp.end());
                int diff = temp[1] - temp[0];
                for(int j = 1; j < temp.size(); j++) {
                    if(temp[j] - temp[j - 1] != diff) {
                        ans[i] = false;
                        break;
                    }
                }
            } else {
                ans[i] = false;
            }
        }
        return ans;
    }
};
