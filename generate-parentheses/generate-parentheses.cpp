class Solution {
public:
    vector<string>v;
    void dfs(int n,int open,int close,string s)
    {
        if(open==n && close==n)
        {
            v.push_back(s);
            return;
        }
        if(open<n)
        {
            dfs(n,open+1,close,s+'(');
            
        }
        if(close<n && close<open)
        {
            dfs(n,open,close+1,s+')');
        }
        
    }
    vector<string> generateParenthesis(int n) 
    {
        string s;
        dfs(n,0,0,s);
        return v;
        
    }
};