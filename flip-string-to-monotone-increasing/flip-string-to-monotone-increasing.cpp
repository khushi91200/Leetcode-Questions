class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a==s.length() || b==s.length())
        {
            return 0;
        }
        int ans=min(a,b);

        int c=0;
        for(int i=0;i<s.length();i++)
        {
            /// total 1s in right = b-c
            /// total zero in right = s.length()-i-(b-c)
            int k=c+s.length()-i-b+c;
            ans=min(ans,k);
            if(s[i]=='1')
            {
                c++;
            }
            
        }
        
        
        
        
        return ans;
        
    }
};