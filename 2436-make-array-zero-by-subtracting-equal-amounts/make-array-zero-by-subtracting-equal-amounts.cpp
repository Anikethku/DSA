class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && st.find(nums[i])==st.end())
            {
                st.insert(nums[i]);
                count++;
            }
        }
        return count;
    }
};