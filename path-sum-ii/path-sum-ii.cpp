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
    vector<vector<int>> ans;
    void dfs(TreeNode* root,int t,vector<int>& v,int sum)
    {
        if(root==NULL )
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(sum+root->val==t)
            {
                v.push_back(root->val);
                ans.push_back(v);
                v.pop_back();
            }
            return;
        }
        v.push_back(root->val);
        dfs(root->left,t,v,sum+root->val);
    
        dfs(root->right,t,v,sum+root->val);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int>v;
        dfs(root,t,v,0);
        return ans;
        
    }
};