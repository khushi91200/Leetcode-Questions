class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& v, int left, int right) 
    {
        int dp=0;
        int prev=-1;
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>right)
            {
                prev=i;
                dp=0;
            }
            else if(v[i]<left)
            {
                ans+=dp;
                
            }
            else
            {
                ans+=i-prev;
                dp=i-prev;
            }
            
        }
        return ans;
        
    }
};