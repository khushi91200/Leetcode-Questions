class Solution {
public:
    string removeDuplicates(string s) {
        string k;
        for(int i=0;i<s.size();)
        {
            if(s[i]==s[i+1])
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                if(i!=0)
                {
                    i--;
                }
            }
            else
            {
                i++;
            }
            
        }
        return s;
    }
};