class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        vector<int>copy=arr;
        unordered_map<int,int>mp;
        sort(copy.begin(),copy.end());
        int r=1;
        for(int num:copy)
        {
            if(mp.find(num)==mp.end())
            {
                mp[num]=r;
                r++;
            }
        }
        for(int num:arr)
        {
            ans.push_back(mp[num]);
        }
        return ans;

    }
};