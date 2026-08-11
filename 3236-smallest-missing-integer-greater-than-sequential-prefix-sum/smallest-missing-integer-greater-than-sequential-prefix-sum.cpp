class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int total=nums[0];
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                total+=nums[i];
            }
            else
            {
                break;
            }
        }
        while(st.count(total))
        {
            total++;
        }
        return total;
    }
};