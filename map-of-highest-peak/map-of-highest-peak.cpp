class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& v) 
    {
        queue<pair<int,int>> q;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]==0)
                {
                    v[i][j]=-1;
                }
                else
                {
                    v[i][j]=0;
                    q.push(make_pair(i,j));
                }
            }
        }/*
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }*/
        while(!q.empty())
        {
            auto x=q.front();
            int i=x.first;
            int j=x.second;
            q.pop();
            if(i+1<v.size() && v[i+1][j]==-1)
            {
                v[i+1][j]=1+v[i][j];
                q.push({i+1,j});
                
            }
            if(j+1<v[0].size() && v[i][j+1]==-1)
            {
                v[i][j+1]=1+v[i][j];
                q.push({i,j+1});
                
            }
            if(i-1>=0 && v[i-1][j]==-1)
            {
                v[i-1][j]=1+v[i][j];
                q.push({i-1,j});
                
            }
            if(j-1>=0 && v[i][j-1]==-1)
            {
                v[i][j-1]=1+v[i][j];
                q.push({i,j-1});
                
            }
            
        }
        return v;
        
    }
};