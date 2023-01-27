         priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>q;
        for(auto it: points)
        {
            int dis=it[0]*it[0]+it[1]*it[1];
            //cout<<dis<<endl;
            q.push({dis, {it[0], it[1]}});
        }
        vector<vector<int>>ans;
        while(k--){
            ans.push_back({q.top().second.first, q.top().second.second});
            q.pop();
        }
        return ans;
