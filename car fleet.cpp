class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        for (int i=0; i<n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        
        stack<double> st;
        for (int i=0; i<n; i++) {
            double t = (double)(target - cars[i].first)/(double)cars[i].second;
            auto slowcar = cars[i];
            while (!st.empty() && st.top() <= t) {
                st.pop();
            } 
            st.push(t);
        }
        
        return st.size();
    }
};
