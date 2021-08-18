class Solution {
public:
    int numDecodings(string s) {
        int prev=1;
        int prev_prev=1;
        int ans=0;
        if(s[0]=='0')
        {
            return 0;
        }
        if(s.length()==1)
        {
            return 1;
        }
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                prev=0;
            }
            string t;
            t+=s[i-1];
            t+=s[i];
         
            if(t<"10" || t>"26")
            {
                prev_prev=0;
            }
            ans=prev+prev_prev;
            prev_prev=prev;
            prev=ans;
            
        }
        return ans;
    }
};