class Solution {
public:
    int maxAbsoluteSum(vector<int>& v) 
    {
        int ans=INT_MIN;
        int a=0,b=0,c,d;
        for(int i=0;i<v.size();i++)
        {
            c=max(0,v[i]+max({a,b,0}));
            d=min(v[i],v[i]+min(a,b));
           // cout<<c<<" "<<d<<endl;
            a=c;
            b=d;
            ans=max(ans,max(abs(a),abs(b)));        
        }
        return ans;
        
    }
 
};