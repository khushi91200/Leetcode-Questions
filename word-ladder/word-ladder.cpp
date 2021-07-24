class Solution {
public:
    int ladderLength(string b, string e, vector<string>& v) 
    {
        map<string,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]=INT_MAX;
            
        }
        if(m.find(e)==m.end())
        {
            return 0;
        }
        queue<string>q;
        q.push(b);
        m[b]=1;
        while(!q.empty())
        {
            string s=q.front();
            q.pop();
           // cout<<s<<" ";
            if(s==e)
            {
                return m[e];
            }
            for(int i=0;i<s.size();i++)
            {
                string k=s;
                for(char ch='a';ch<='z';ch++)
                {
                    
                    k[i]=ch;

                    if(m.find(k)!=m.end() && m[k]==INT_MAX)
                    {
                        q.push(k);
                        m[k]=m[s]+1;
                        if(k==e)
                        {
                            return m[e];
                        }
                    }
                }
                
            }

        }
        if(m[e]==INT_MAX)
        {
            return 0;
        }
        return m[e];
        
        
        
        
    }
};