class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans1=((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
        int ans2=nums[0]-1*nums[1]-1;
        return (ans1>ans2)?ans1:ans2;

    }
};