class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        int i=0;
        double avg=0;
        double sum=0;
        for(int j=0;j<nums.size();j++)
        {
           sum+=nums[j];
           if(j>k-1) 
           {
                sum-=nums[i];
                i++;
           }
           if(j>=k-1){
           avg=sum/k;
           ans=max(ans,avg);  }        
        }
        return ans;
    }
};