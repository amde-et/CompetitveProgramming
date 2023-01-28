class Solution{
public:
 long long helper(long long k, long long n, long long mod)
    {
        if(n==0) return 1;
        if(n==1) return k;
        long long x = helper(k,n/2,mod)%mod;
        x = (x*x)%mod;
        if(n&1) x = ((x%mod)*(k%mod))%mod;
        return x;
    }
    
    int minNonZeroProduct(int p) {
        long long mod = 1e9+7;
        long long n = pow(2,p);
        long long k = n-2;
        int x = helper(k,(k+1)/2,mod) % mod;
        x = ((x%mod)*((n-1)%mod))%mod;
        return x;
    }
};
