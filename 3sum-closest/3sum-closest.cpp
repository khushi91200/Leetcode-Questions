class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) 
    {
        int diff=INT_MAX;
        int ans;
        sort(v.begin(),v.end());/*
        for(int i=0;i<v.size();i++)
        {
          //  cout<<v[i]<<" ";
        }
        cout<<endl;*/
        for(int i=0;i<v.size()-2;i++)
        {
            for(int j=i+1;j<v.size()-1;j++)
            {
                int x=t-v[i]-v[j];
                int y=lower_bound(v.begin()+j+1,v.end(),x)-(v.begin());
                if(y==v.size())
                {
                    y--;
                }
              //  cout<<i<<" "<<j<<" "<<y<<" ";
                if(abs(t-(v[i]+v[j]+v[y]))<diff)
                {
                    diff=abs(t-v[i]-v[j]-v[y]);
                    ans=v[i]+v[j]+v[y];
                }
             //   cout<<diff<<endl;
                if(y-1!=j)
                {
                    if(abs(t-(v[i]+v[j]+v[y-1]))<diff)
                    {
                        diff=abs(t-v[i]-v[j]-v[y-1]);
                        ans=v[i]+v[j]+v[y-1];
                    }
                }
                
                
            }
        }
        return ans;
    }
};