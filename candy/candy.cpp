class Solution {
public:
    int candy(vector<int>& v) 
    {
        int up=0;
        int down=0;
        int ans=1;
        int peak=0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {
                up++;
                ans+=1+up;
                down=0;
                peak=up;
            }
            else if(v[i]==v[i-1])
            {
                ans++;
                up=0;
                down=0;
                peak=0;
            }
            else
            {
                down++;
                up=0;
                ans+=down;
                if(down>peak)
                {
                    ans++;
                }
            }
        }
        return ans;
        
    }
};