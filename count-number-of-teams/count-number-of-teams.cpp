class Solution {
public:
    int numTeams(vector<int>& v) 
    {
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            int x=i-1,y=i;
            int a=0,b=0,c=0,d=0;
            while(x>=0)
            {
                if(v[x]<v[i])
                {
                    a++;
                }
                if(v[x]>v[i])
                {
                    c++;
                }
                x--;
            }
            while(y<v.size())
            {
                if(v[y]>v[i])
                {
                    b++;
                }
                if(v[y]<v[i])
                {
                    d++;
                }
                y++;
                
            }
            ans+=(a*b)+(c*d);
            
            
        }
        return ans;
        
    }
};