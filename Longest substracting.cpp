class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, count = 0;
        unordered_map<char,int> mp;
        
        for (int j = 0; j < s.size(); j++){
          
            mp[s[j]]++;
           
            if (mp[s[j]] == 2){
 
                int ele = s[j];

                while (mp[ele] != 1 && i < j){
                    mp[s[i]]--;
                    i++;
                }
            }

            count = max(count, j-i+1);
        }
        return count;
    }
};
