class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
           // cout<<i<<" ";
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
               // cout<<i<<" ";
                if(st.empty())
                {
                    
                    s[i]='-';
                }
                else
                {
                
                    st.pop();          
                }
                
            }
            
        }
      //  cout<<"k";
        while(!st.empty())
        {
            s[st.top()]='-';
            st.pop();
        }
        string k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='-')
            {
                k.push_back(s[i]);
            }
        }
        return k;
        
        
    }
};