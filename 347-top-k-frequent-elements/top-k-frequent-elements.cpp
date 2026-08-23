class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(int x : nums)
        {
            mp[x]++;
        }
        vector<pair<int,int>> v;

        for(auto it : mp)
        {
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Take top k
        vector<int> ans;

        for(int i = 0; i < k; i++)
        {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};