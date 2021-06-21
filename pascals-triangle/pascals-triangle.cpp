class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            vector<int>z;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    z.push_back(1);
                }
                else
                {
                    z.push_back(v[i-1][j-1]+v[i-1][j]);
                    
                }
            }
            v.push_back(z);
        }
        return v;
        
    }
};