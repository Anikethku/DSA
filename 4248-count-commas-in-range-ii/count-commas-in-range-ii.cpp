class Solution {
public:
    long long countCommas(long long n) {
        long long ans=1000,res=0;
        while(ans<=n)
        {
            res+=n-ans+1;
            ans*=1000;
        }
        return res;
    }
};