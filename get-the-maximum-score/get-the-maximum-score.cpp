class Solution {
public:
    int maxSum(vector<int>& a, vector<int>& b) 
    {
        int i=0,j=0;
        long long int result=0;
        long long int sum1=0;
        long long int sum2=0;
        int mod=1000000007;
        for(;i<a.size() && j<b.size();)
        {
           // cout<<i<<" "<<j<<endl;
            if(a[i]<b[j])
            {
                
                sum1+=a[i];
                sum1=sum1%mod;
                i++;
                
            }
            else if(a[i]>b[j])
            {
                
                sum2+=b[j];
                sum2=sum2%mod;
                j++;
            }
            else
            {
                result+=max(sum1,sum2)+a[i];
                result=result%mod;
                i++;
                j++;
                sum1=0;
                sum2=0;
            }
        }
    //  cout<<result;
        if(i==a.size() && j==b.size())
        {
            result+=max(sum1,sum2);
            result=result%mod;
            return result;
        }
        while(i<a.size())
        {
            sum1+=a[i];
            
            i++;
        }
        while(j<b.size())
        {
            sum2+=b[j];

            j++;
        }
        result+=max(sum1,sum2);
        result=result%mod;


        return result;
    }
};