class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>m;
        int l=0;
        int index=0;
        int ans=0;
        for(int i=0;i<s.length();i++)   
           {
                if(m.find(s[i])==m.end())
                    {
                        m[s[i]]=i;
                        l++;
                    }
                else
                   {
                    ans=max(ans,l);
                    
                    l=i-max(index,m[s[i]]);
                    index=max(index,m[s[i]]);

                    m[s[i]]=i;
                   }
               //    cout<<l<<" "<<index<<endl;
            
            }
        return max(l,ans);
    }
};