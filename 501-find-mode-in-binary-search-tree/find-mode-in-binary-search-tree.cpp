/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>mp;
        helper(mp,root);
        int maxi=0;
        for(auto it:mp)
        {
            maxi=max(maxi,it.second);
        }
        for(auto it:mp)
        {
            if(it.second == maxi)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
    void helper(unordered_map<int,int>&mp,TreeNode* root)
    {
        if(root!=NULL)
        {
            helper(mp,root->left);
            mp[root->val]++;
            helper(mp,root->right);
        }
    }
};