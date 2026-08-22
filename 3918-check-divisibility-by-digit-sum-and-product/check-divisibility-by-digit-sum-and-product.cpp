class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int digit=0;
        int sum=0;
        int prod=1;
        while(n>0)
        {
            digit=n%10;
            n=n/10;
            sum=sum+digit;
            prod=prod*digit;
        }
        return (original%(sum+prod))==0;
    }
};