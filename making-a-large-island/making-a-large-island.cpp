class Solution {
public:
    int ans=0;
    int c=0;
    void dfs(int i,int j,vector<vector<int>>& v,int id)
    {
        if(i<0 || j<0 || i>=v.size() || j>=v.size() || v[i][j]!=1 )
        {
            return;
        }
        v[i][j]=id;
        c++;
        dfs(i+1,j,v,id);
        dfs(i,j+1,v,id);
        dfs(i,j-1,v,id);
        dfs(i-1,j,v,id);
    }
    int largestIsland(vector<vector<int>>& v) {
       
        int id=2;
        map<int,int>m;
        
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i][j]==1)
                {
                    dfs(i,j,v,id);
                    ans=max(ans,c);
                    m[id]=c;
                    c=0;
                    id++;
                }
            }
        }
     //   cout<<ans<<endl;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i][j]==0)
                {
                    int xy=0;
                    set<int>s;
                    if(i-1>=0)
                    {
                        s.insert(v[i-1][j]);
                    }
                    if(j-1>=0)
                    {
                        s.insert(v[i][j-1]);
                    }
                    if(i+1<v.size())
                    {
                        s.insert(v[i+1][j]);
                    }
                    if(j+1<v.size())
                    {
                        s.insert(v[i][j+1]);
                    }
                    for(auto x:s)
                    {
                        xy+=m[x];
                     //   cout<<x<<" "<<i<<" "<<j<<endl;
                    }
                    ans=max(ans,1+xy);
                }
            }
        }
        return ans;
     


        
    }
};