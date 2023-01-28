class Solution {
public:
    int longestSubarray(vector<int>& A) {
        int N = A.size(), prev2 = -1, prev = -1, ans = 0;
        for (int i = 0; i <= N; ++i) {
            if (i < N && A[i] == 1) continue;
            if (i == N && prev == -1) return N - 1;
            if (prev != -1) ans = max(ans, i - prev2 - 2);
            prev2 = prev;
            prev = i;
        }
        return ans;
    }
};
