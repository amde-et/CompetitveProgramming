  vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> v(n,0);
        v[0]=v[0]^arr[0];
        for(int i=1;i<n;i++)
        {
            v[i]=v[i-1]^arr[i];
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++)
        {
            int s=queries[i][0];
            int e=queries[i][1];
            if(s!=0)
            {
                res.push_back(v[s-1]^v[e]);
            }
            else
                res.push_back(v[e]);
        }
        return res;
    }
