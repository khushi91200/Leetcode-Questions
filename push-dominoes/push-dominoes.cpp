class Solution {
public:
    string pushDominoes(string s) {
        int f=-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
            {
                f=i;
            }
            else if(s[i]=='L' && f!=-1)
            {
                if((i-f)%2==0)
                {
                    s[(f+i)/2]='*';
                }
                else
                {
                    s[(f+i)/2]='_';
                    
                }
                f=-1;
            }
            
        }
      //  cout<<s<<" ";
        f=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                f=1;
            }
            else if(s[i]=='*')
            {
                f=-1;
            }
            else if(s[i]=='_')
            {
                s[i]='R';
                f=-1;
            }
            else if(f!=-1 && s[i]=='L')
            {
                f=-1;
            }
            else if(f!=-1 && s[i]=='.')
            {
                s[i]='R';
            }
        }
        f=-1;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='L')
            {
                f=1;
            }
            else if(s[i]=='.' && f!=-1)
            {
                s[i]='L';
            }
            else
            {
                f=-1;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                s[i]='.';
            }
        }
        return s;
        
    }
};