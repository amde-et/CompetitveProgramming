class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(auto x: arr)
            mp[x]++;
        
        multiset<int> st;
        for(auto p: mp)
            st.insert(p.second);
        
        int size = n, cnt = 0;
	
        int m = st.size();
        
        
        auto it = st.end();        
        it--;
		
        for( ; m > 0; it--)
        {
            size -= *it;
            cnt++;
            
            if(size <= n/2)
                return cnt;
            m--;
        }     
        return cnt;
    }
};
Console
