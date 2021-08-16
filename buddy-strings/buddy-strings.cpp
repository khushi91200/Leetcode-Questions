class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())
        {
            return false;
        }
        if(s==goal)
        {
            set<char>st;
           // cout<<"k";
            for(int i=0;i<s.length();i++)
            {
               // cout<<s.length()<<" ";
              // cout<<i<<endl;
               // cout<<s[i]<<" ";
                if(st.find(s[i])!=st.end())
                {
                  //  cout<<s[i];
                    return true;
                }
                st.insert(s[i]);
            }
            return false;
            
        }
        else
        {
            int f=1;
            for(int i=0;i<s.length();i++)              
            {
                char a,b;
                if(f==2 && s[i]!=goal[i])
                {
                    return false;
                    
                }
                else if(f==0)
                {
                    if(s[i]!=goal[i])
                    {
                        if(s[i]==b && goal[i]==a)
                        {
                            f=2;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    
                }
                else if(f==1 && s[i]!=goal[i])
                {
                    a=s[i];
                    b=goal[i];
                    f=0;
                    
                }
            }
            if(f==0)
            {
                return false;
            }
            return true;
            
        }

        
    }
};