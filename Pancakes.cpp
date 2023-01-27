class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
          int n = arr.size();
        vector<int> v;
        for (int i = n; i > 0; i--)
        {
            int m = i; // curr_max
            int j = 0; // position of curr_max
            while (arr[j] != m)
                j++;
            reverse(arr.begin(), arr.begin() + j + 1);
            v.push_back(j + 1);
            reverse(arr.begin(), arr.begin() + m);
            v.push_back(m);
        }
        return v;
        
    }
};
