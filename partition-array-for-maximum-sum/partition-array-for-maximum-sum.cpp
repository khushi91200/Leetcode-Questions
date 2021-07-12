class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& v, int k) {
        vector<int>dp;
        dp.push_back(v[0]);
        for(int i=1;i<v.size();i++)
        {
           // cout<<i<<" ";
            int ans=0,maxi=INT_MIN;
            for(int j=i;j>=0 && ((i-j)<=(k-1));j--)
            {
              //  cout<<j;
                
                maxi=max(maxi,v[j]);
                if(j>0)
                ans=max(ans,dp[j-1]+(maxi*(i-j+1)));
                else
                ans=max(ans,maxi*(i-j+1));
               // cout<<ans<<" "<<maxi<<"- ";
            }
           // cout<<endl;
            dp.push_back(ans);
        }
        for(int i=0;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
        }
        return dp[dp.size()-1];
    }
};