class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length())       return {};
        
        vector<int> ans;
        vector<int> pMap(26,0);
        vector<int> window(26,0);
        
        int windStart = 0, windEnd = p.size()-1;
        
        for(auto c: p)  pMap[c - 'a']++;
		
        for(int i = 0; i <= windEnd; i++)           // First Window
            window[s[i] - 'a']++;
        
        if(window == pMap)  
			ans.push_back(0);
        
        windEnd++;              // Increment so we can include next element in our window.
        
        while(windEnd < s.size()){
            
            window[s[windEnd++] - 'a'] += 1;        //Include
            window[s[windStart++] - 'a'] -= 1;      //Exclude
            
            if(window == pMap)                      // O(26) = O(1)
                ans.push_back(windStart);
        }
        return ans;
    }
};
