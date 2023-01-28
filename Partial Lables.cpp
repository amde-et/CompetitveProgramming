class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]=i;
        vector<int> ans;
        int l=0;
        int start=-1;
        for(int i=0;i<s.size();i++)
        {
            l=max(l,mp[s[i]]);
            if(i==l)
            {
                ans.push_back(l-start);
                start=i;
            }
        }
        return ans;
    }
};
