class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) 
    {
        vector<int>dp;
        dp.push_back(v[0]);
        dp.push_back(v[1]);
        for(int i=2;i<v.size();i++)
        {
            dp.push_back(min(v[i]+dp[i-1],v[i]+dp[i-2]));
        }
        
        //
        return min(dp[v.size()-1],dp[v.size()-2]);
        
    }
};