class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        {
            return "1";
        }
        string s=countAndSay(n-1);
        string k;
        for(int i=0;i<s.size();i++)
        {
           // cout<<s;
            int c=1;
          //  int j=i;
            while((i+1)<s.size() && s[i]==s[i+1])
            {
                c++;
                i++;              
            }
         // cout<<k<<" ";
            k+=to_string(c);
         // cout<<k<<" ";
            k+=s[i];
          //cout<<k<<" ";
            
        }
      //  cout<<k<<" ";
        return k;
        
    }
};