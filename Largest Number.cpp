class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),0)==nums.size()) return "0";
        sort(nums.begin(),nums.end(),[](int x,int y){
            string a = to_string(x), b = to_string(y);
            return a+b>=b+a;
        });
        string ans = "";
        for(auto it:nums) ans+=to_string(it);
        return ans;
    }
};
