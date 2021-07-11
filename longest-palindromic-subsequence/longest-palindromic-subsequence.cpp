class Solution {
public:
    int longestPalindromeSubseq(string s) 
    {
        vector<vector<int>> dp( s.size(), vector<int> (s.size(), 0));
        int x=0,y=0;
        int n=s.size();
        for(int i=0;i<dp.size();i++)
        {
            x=0;
            y=i;
            for(int j=0;j<n;j++)
            {
              //  cout<<i<<" "<<n<<endl;
                if(x-y==0)
                {
                    dp[x][y]=1;
                }
                else
                {
                    if(s[x]==s[y])
                    {
                       dp[x][y]=2+dp[x+1][y-1];
                    }
                    else
                    {
                        dp[x][y]=max(dp[x][y-1],dp[x+1][y]);
                        
                    }
                }
                x++;
                y++;
                
            }
            n--;
        }
         
        return dp[0][s.size()-1];
        

        
    }
};