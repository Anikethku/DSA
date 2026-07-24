class Solution {
public:
    int binary(vector<int>&nums,int tar, bool pos)
    {
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==tar)
            {
                ans=mid;
                if(pos)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            else if(nums[mid]<tar)
            {
                left=mid+1;
            }  
            else
            {
                right=mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=binary(nums,target,true);
        int last=binary(nums,target,false);
        return {first,last};
       
    }
};