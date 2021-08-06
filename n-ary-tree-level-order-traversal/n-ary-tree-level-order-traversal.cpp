/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        ans.push_back({root->val});
        while(!q.empty())
        {
            int n=q.size();
            vector<int>z;
            int f=0;
            while(n--)
            {
                Node* temp=q.front();
                q.pop();
                for(int i=0;i<temp->children.size();i++)
                {
                    f=1;
                    q.push(temp->children[i]);
                    z.push_back(temp->children[i]->val);
                    
                    
                }
                
            }
            if(f)
            ans.push_back(z);
        }
        return ans;
    }
};