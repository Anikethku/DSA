class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>minValue(n);
        minValue[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            minValue[i]=min(nums[i],minValue[i+1]);
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(nums[i],mx);
            if(mx-minValue[i]<=k)
            {
                return i;
            }
        }
        return -1;
    }
};