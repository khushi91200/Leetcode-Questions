class Solution {
public:
    string add(string a,string b)
    {
        string s;
        int carry=0;
        int sum=0;
        for(int i=b.length()-1;i>=0;i--)
        {
            int x=b[i]-'0';
            int y=a[i]-'0';
            sum=x+y+carry;
            if(x+y+carry>=10)
            {
                s.push_back(sum%10+'0');
                carry=1;
                sum=0;
                
            }
            else
            {
                s.push_back(sum+'0');
                sum=0;
                carry=0;
            }
            
        }
        if(carry>0)
        {
            s.push_back(carry+'0');
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
    string addStrings(string a, string b) 
    {
        if(a.length()==b.length())
        {
            return add(a,b);
        }
        else  if(a.length() < b.length())
        {
            int x=b.length()-a.length();
            reverse(a.begin(),a.end());
            while(x--)
            {
                a.push_back('0');
            }
            reverse(a.begin(),a.end());
            return add(a,b);          
        }
        else
        {
            int x=a.length()-b.length();
            reverse(b.begin(),b.end());
            while(x--)
            {
                b.push_back('0');
            }
            reverse(b.begin(),b.end());
          //  cout<<a<<" "<<b;
            return add(a,b); 
            
        }
        
    }
};