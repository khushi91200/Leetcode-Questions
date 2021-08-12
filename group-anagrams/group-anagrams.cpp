class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) 
    {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(int i=0;i<v.size();i++)
        {
            string s=v[i];
            string k=s;
            sort(k.begin(),k.end());
            m[k].push_back(s);          
        }
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
        
    }
};