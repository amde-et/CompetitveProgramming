class Solution {
public:
    int maxResult(vector<int>& v, int k) {
        int score = v[0], n = v.size();
        priority_queue<pair<int,int>> pq;
        pq.push({v[0],0});
        
        for(int i=1; i<n; i++) {
            while(!pq.empty() && pq.top().second+k < i) pq.pop();
            score = v[i] + pq.top().first;
            pq.push({score, i});
        }
        
        return score;
    }
};
