class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int first = intervals[0][0], second = intervals[0][intervals[0].size() - 1];
        for (int i = 1; i < intervals.size(); i++) {
            if (second >= intervals[i][0] || first >= intervals[i][0]) {
                second = max(second, intervals[i][intervals[i].size() - 1]);
                first = min(first, intervals[i][0]);
                continue;
            }
            res.push_back({first, second});
            first = intervals[i][0];
            second = intervals[i][intervals[i].size() - 1];
        }
        res.push_back({first, second});
        return res;
    }
};
