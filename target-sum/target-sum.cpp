class Solution {
public:
    int findTargetSumWays(vector<int>& v, int target) {
        vector<vector<int>> dp(v.size(),vector<int>(2001,0));
        for(int i=0;i<v.size();i++)
        {
          //  cout<<i<<" ";
            for(int j=-1000;j<=1000;j++)
            {
               
                if(i==0)
                {
                    if(j==0 && v[0]==0)
                    {
                        dp[0][j+1000]=2;
                    }
                    else if( v[0]==(0-j) || v[0]==j)
                    {
                        dp[i][j+1000]+=1;
                    }
                    
                }
                else
                {
                    if(j-v[i]+1000>=0)
                    dp[i][j+1000]+=dp[i-1][j-v[i]+1000];
                    if(j+v[i]+1000<=2000)
                    dp[i][j+1000]+=dp[i-1][j+v[i]+1000];

                }
                
            }
          
        }

        return dp[v.size()-1][target+1000];
        
    }
};