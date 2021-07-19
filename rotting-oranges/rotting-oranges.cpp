class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) 
    {
       // return 1;
        int good=0,bad=0;
        queue<pair<int,int>> q;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==1)
                {
                   
                    good++;
                }
                else if(v[i][j]==2)
                {
                     q.push(make_pair(i,j));


                    bad++;
                }
            }
            
        }
        if(good==0)
        {
            return 0;
        }
        if(bad==0)
        {
            return -1;
        }
        int c=0;
    //   cout<<good<<" ";
        while(!q.empty())
        {
            int sz=q.size();
          //  cout<<sz<<" ";
            while(sz--)
            {
          
            auto x=q.front();
            q.pop();
            int i=x.first;
            int j=x.second;
            int f=0;
          //  cout<<i<<" "<<j<<" ";
            if(i-1>=0 && v[i-1][j]==1)
            {
               // f=1;
                good--;
                q.push(make_pair(i-1,j));  
                v[i-1][j]=2;
            }
            if(j-1>=0 && v[i][j-1]==1)
            {    
              //  f=1;
                good--;
                q.push(make_pair(i,j-1)); 
                v[i][j-1]=2;
            }
            if(i+1<v.size() && v[i+1][j]==1)
            {
              
                good--;
                q.push(make_pair(i+1,j)); 
                v[i+1][j]=2;
            }
          //  cout<<"ji"<<i<<" "<<j<<endl;
            if(j+1<v[0].size() && v[i][j+1]==1)
            {
              
                good--;
                q.push(make_pair(i,j+1)); 
                v[i][j+1]=2;
            }
            
           
          //  cout<<good<<endl;
            
            } 
            c++;
        }
       // cout<<good;
        if(good==0)
        {
            return c-1;
        }
        return -1;
    }
};