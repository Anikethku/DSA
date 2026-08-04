class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       unordered_set<int>st;
        vector<int>v;
       for(int i=0;i<nums.size();i++)
       {
            st.insert(nums[i]);
       }
       int mn=nums[0];
       int mx=nums[nums.size()-1];
       for(int i=mn;i<mx;i++)
       {
        if(st.find(i+1)==st.end()) v.push_back(i+1);
       }
       return v;
    }
};