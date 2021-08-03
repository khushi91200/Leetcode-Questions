class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) 
    {
        vector<vector<int>> ans;
        int x=pow(2,v.size());
        for(int i=0;i<x;i++)
        {
            int num=i;
            vector<int>z;
            int c=0;
            while(num>0)
            {
                int y=num&1;
                if(y==1)
                {
                    z.push_back(v[c]);                  
                }
                num=num>>1;
                c++;
                
            }
            ans.push_back(z);
        }
        return ans;
        
    }
};