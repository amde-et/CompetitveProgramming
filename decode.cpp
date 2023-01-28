class Solution {
public:
    
    string solve(string s, int& pos) {
        
        int n = s.size(), num = 0;
        string ans = "";
        
        for(; pos < n; pos++) {
            
            char cur = s[pos];
            if(isalpha(cur)) ans += cur;
            else if(isdigit(cur)) num = num * 10 + cur - '0';
            else if(cur == ']') return ans;
			
            else {
                string tmp = solve(s, ++pos);
                while(num--) ans += tmp;
                num = 0;
            }
        }
        
        return ans;
    }
    
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};
