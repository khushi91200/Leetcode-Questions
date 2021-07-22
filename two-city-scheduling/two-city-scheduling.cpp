class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b)
    {
        return (a[0]-a[1])<(b[0]-b[1]);
        
    }
    int twoCitySchedCost(vector<vector<int>>& v) 
    {
        int c=0;
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            if(i>=(v.size()/2))
            {
                c+=v[i][1];
            }
            else
            {
                c+=v[i][0];
            }
        }
        return c;
        
    }
};