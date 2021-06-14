class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int>v;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(a[i]+a[j]==target && i!=j)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;

                }
            }
        }
        return v;
    }
};