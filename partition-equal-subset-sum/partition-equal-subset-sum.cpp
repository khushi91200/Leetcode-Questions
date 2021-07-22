class Solution {
public:
    bool canPartition(vector<int>& v) 
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        if(sum%2!=0)
        {
            return false;
        }
        sum=sum/2;
        vector<vector<int>> dp(v.size(),vector<int>(sum+1,0));
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                {
                    dp[i][j]=0;
                }
                else if(i==0)
                {
                    if(j==v[i])
                    {
                        dp[i][j]=1;
                    }
                }
                else
                {
                    if(j-v[i]>=0)
                    {
                        dp[i][j]=(1&dp[i-1][j-v[i]]) || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
        }
        return dp[v.size()-1][sum];
        
        
    }
};