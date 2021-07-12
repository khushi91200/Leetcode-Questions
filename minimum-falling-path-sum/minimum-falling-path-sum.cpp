class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& v) 
    {
        vector<vector<int>> dp(v.size(),vector<int>(v[0].size(),0));
        int ans=INT_MAX;

        for(int i=0;i<v[0].size();i++)
        {
            ans=min(ans,v[0][i]);
            dp[0][i]=v[0][i];
        }
        for(int i=1;i<v.size();i++)
        {
            ans=INT_MAX;
            for(int j=0;j<v[0].size();j++)
            {
                
                int a=INT_MAX,b=INT_MAX,c=INT_MAX;
                if(j-1>=0)
                {
                    b=dp[i-1][j-1];
                    
                }
                if(j+1<v[0].size())
                {
                    c=dp[i-1][j+1];
                }
                dp[i][j]=v[i][j]+min({dp[i-1][j],b,c});
                ans=min(ans,dp[i][j]);
            }
        }
    
        return ans;
    }
};