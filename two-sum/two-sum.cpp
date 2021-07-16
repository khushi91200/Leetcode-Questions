class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<a.size();i++)
        {
            if(m.find(target-a[i])!=m.end())
            {
                v.push_back(i);
                v.push_back(m[target-a[i]]);
            }
            else
            {
                m[a[i]]=i;
            }
        }

        return v;

    }
};