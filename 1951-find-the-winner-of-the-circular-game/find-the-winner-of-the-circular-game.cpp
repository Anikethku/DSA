class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            nums.push_back(i+1);
        }
        int j=0;
        while(nums.size()!=1)
        {
            j=(j+k-1)%nums.size();
            nums.erase(nums.begin()+j);
        }
        return nums[0];
    }
};