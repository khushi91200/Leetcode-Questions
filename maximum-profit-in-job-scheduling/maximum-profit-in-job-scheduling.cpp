bool compare(vector<int> v1, vector<int> v2){
    if(v1[1] < v2[1]){
        return true;
    }
    return false;
}

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = profit.size();
        vector<vector<int>> v;
        
        for(int i=0; i<n; i++){
            v.push_back({startTime[i],endTime[i],profit[i]});
        }
        
        sort(v.begin(),v.end(),compare);  //to compare on the basis of endTime
        
        int dp[n];  //dp array will store the maximum profit till ith index
        dp[0] = v[0][2];
        
        for(int i=1; i<n; i++){
            int inc = v[i][2];
            int last = -1; //it should not be a possible index
            int low = 0;
            int high = i-1;
            
            //Binary search part,do a dry run and fill the dp array yourself to clear doubts
            while(low <= high){
                int mid = (low+high)/2;
                if(v[mid][1] <= v[i][0]){ // we want to check that how many jobs we can do
                    last = mid;           // before doing our current job        
                    low = mid+1;          //
                }
                else{
                    high = mid-1;
                }
            }
            
            if(last != -1){      //we get the index of last job that we can do by
                inc += dp[last]; //above binary search
                //max profit we will make till ith index
            }
            int exc = dp[i-1]; //previous max profit
            dp[i] = max(inc,exc);
        }
        return dp[n-1];
    }
};