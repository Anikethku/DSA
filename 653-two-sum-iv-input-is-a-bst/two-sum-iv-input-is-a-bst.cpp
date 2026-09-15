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
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        helper(root,ans);
        unordered_map<int,int>mp;
        for(int i = 0; i < ans.size(); i++)
        {
            int complement = k - ans[i];

            if(mp.find(complement) != mp.end())
                return true;

            mp[ans[i]] = 1;
        }
        return false;
    }
    void helper(TreeNode* root, vector<int>&ans)
    {
        if(root==NULL) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
};