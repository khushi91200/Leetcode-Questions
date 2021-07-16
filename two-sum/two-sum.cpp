class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int>v;
        map<int,vector<int>>m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]].push_back(i);
        }
        for(int i=0;i<a.size();i++)
        {
            if(m.find(target-a[i])!=m.end())
            {
              //  cout<<i<<" ";
                if((target-a[i])==a[i])
                {
                    if(m[a[i]].size()>=2)
                    {
                        v.push_back(m[a[i]][0]);
                        v.push_back(m[a[i]][1]);
                        return v;
                    }
                    
                }
                else
                {
                    v.push_back(i);
                    v.push_back(m[target-a[i]][0]);
                    return v;
                }
            }
        }
        return v;

    }
};