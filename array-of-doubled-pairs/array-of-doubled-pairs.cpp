class Solution {
public:
    bool canReorderDoubled(vector<int>& v) 
    {
        map<int,int>m;
        map<int,int,greater<int> >m2;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
            {
                m2[v[i]]++;
            }
            else
            m[v[i]]++;
        }
       // cout<<m2.size()<<" "<<m.size();
        for(auto x:m2)
        {
           // cout<<x.first<<" "<<x.second<<endl;
            if(x.second==INT_MAX)
            {
                continue;
            }
            int k=x.second;
            while(k--)
            {
    
                if(m2.find(x.first*2)!=m2.end())
                {
                    if(m2[x.first*2]==INT_MAX)
                    {
                        return false;
                    }
                    if(m2[x.first*2]==1)
                    {
                        m2[x.first*2]=INT_MAX;
                    }
                    else
                    {
                        m2[x.first*2]--;
                    }
                }
                else
                {
                   // cout<<"l";
                    return false;
                }
            }
        }
      //  cout<<"l";
        for(auto x:m)
        {
            if(x.second==INT_MAX)
            {
                continue;
            }
            int k=x.second;
            while(k--)
            {
                if(m.find(x.first*2)!=m.end())
                {
                    if(m[x.first*2]==INT_MAX)
                    {
                        return false;
                    }
                    if(m[x.first*2]==1)
                    {
                        m[x.first*2]=INT_MAX;
                    }
                    else
                    {
                        m[x.first*2]--;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return true;     
    }
};