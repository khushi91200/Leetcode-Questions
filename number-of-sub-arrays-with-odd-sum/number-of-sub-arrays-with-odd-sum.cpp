class Solution {
public:
    int numOfSubarrays(vector<int>& v) 
    {
        vector<vector<int>> dp(2, vector<int>(v.size(),0));
        long long int sum=0;
        if(v[0]%2==0)
        {
            dp[0][0]=0;
            dp[1][0]=1;
        }
        else
        {
            dp[0][0]=1;
            dp[1][0]=0;
        }
        sum+=dp[0][0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                dp[1][i]=1;
                dp[0][i]+=dp[0][i-1];
                dp[1][i]+=dp[1][i-1];
            }
            else
            {
                dp[0][i]=1;
                dp[0][i]+=dp[1][i-1];
                dp[1][i]+=dp[0][i-1];
                
            }
            sum+=dp[0][i];
            sum=sum%1000000007;
        }/*
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[0].size();j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        return sum;
        
    }
};