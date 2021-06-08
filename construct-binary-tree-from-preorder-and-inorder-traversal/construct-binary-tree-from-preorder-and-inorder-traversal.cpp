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
    int i=0;

    map<int,int>m;

    TreeNode* dfs(vector<int>& preorder,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        
       //cout<<i<<" ";
        TreeNode* x=new TreeNode(preorder[i]);  
       // cout<<x->val<<" ";
        int index=m[preorder[i]];
      //  cout<<index<<" "<<endl;
        i++;
        
        x->left=dfs(preorder,s,index-1);
        x->right=dfs(preorder,index+1,e);
        return x;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        
        for(int i=0;i<inorder.size();i++)
        {
            m[inorder[i]]=i;
        }
        int n=preorder.size()-1;
        TreeNode* t= dfs(preorder,0,n);
      //  cout<<"8";
      //  cout<<t->val;
       return t;
        
        
    }
};