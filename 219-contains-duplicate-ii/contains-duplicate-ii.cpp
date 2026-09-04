class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int n=nums.size();
        unordered_set<int>st;
        for(int j=i;j<n;j++)
        {
            if(st.find(nums[j])!=st.end())
            { 
                return true;
            }

            st.insert(nums[j]);

            if(j-i>=k)
            {
                st.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};