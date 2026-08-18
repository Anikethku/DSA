class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_set<int> st;
        vector<int> res(51,0);
        int n=nums.size();
        for(int i=0; i<=n-k; i++){
            for(int j=i; j<i+k; j++){
                if(st.find(nums[j])==st.end()){
               res[nums[j]]++;
               st.insert(nums[j]);
            }
            }
            st.clear();
        }
        int maxi=INT_MIN;
        for(int i=0; i<res.size(); i++){
            if(res[i]==1){
                maxi=max(maxi,i);
            }
        }
        return maxi==INT_MIN?-1:maxi;
    }
};