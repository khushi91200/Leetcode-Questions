class Solution {
public:
    static bool cmp1(vector<int>& a,vector<int>& b)
    {
        return a[0]<b[0];
    }
    static bool cmp2(vector<int>& a,vector<int>& b)
    {
        return a[1]<b[1];
    }
    int smallestChair(vector<vector<int>>& v, int t) 
    {
        /// map of index of unoccupied chairs
        map<int,int>m;
        /// map of friend no ->chair no
        map<int,int>x;
        for(int i=0;i<v.size();i++)
        {
            m[i]++;
        }
        vector<vector<int>> a;
        vector<vector<int>> b;

        for(int i=0;i<v.size();i++)
        {
            vector<int>z=v[i];
            z.push_back(i);
            a.push_back(z);
            b.push_back(z);
        }
        sort(a.begin(),a.end(),cmp1);
        sort(b.begin(),b.end(),cmp2);
        int i=0,j=0;
        while(i<v.size() || j<v.size())
        {
            if(i< v.size() && a[i][0] <b[j][1])
            {
               // cout<<i<<" ";
                
                auto k=m.begin();
                x[a[i][2]]=k->first;
                m.erase(k);
                if(a[i][2]==t)
                {
                   return x[t];
                }
                i++;
                
            }
        
            else
            {
                m[x[b[j][2]]]++;
                x.erase(b[j][2]);
                j++;
                
                
            }
            
        }
        return 0;
        
        
        
    }
};