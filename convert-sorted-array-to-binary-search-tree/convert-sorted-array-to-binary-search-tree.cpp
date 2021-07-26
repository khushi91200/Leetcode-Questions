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
    TreeNode* dfs(vector<int>& v,int s,int e)
    {
        if(s>e)
        {
            return NULL;
            
        }
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=dfs(v,s,mid-1);
        root->right=dfs(v,mid+1,e);
        return root;
        
        
    }
    TreeNode* sortedArrayToBST(vector<int>& v) 
    {
   
        TreeNode* x=dfs(v,0,v.size()-1);
        return x;
        
        
        
    }
};