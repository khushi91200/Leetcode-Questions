class Solution {
public:
    vector<int> threeEqualParts(vector<int>& v) 
    {
        int c=0;
        vector<int>z;
        for(int i=0;i<v.size();i++)
        {
            c+=v[i];
        }
        if(c==0)
        {
            z.push_back(0);
            z.push_back(v.size()-1);
            return z;
        }
        if(c%3!=0)
        {
            z.push_back(-1);
            z.push_back(-1);
            return z;
        }
        int start=0,mid=0,end=0;
        while(v[start]==0)
        {
            start++;
        }
        int k=c/3;
        mid=start;
        int cnt=0;
        while(cnt!=k+1)
        {
            if(v[mid]==1)
            {
                cnt++;
            }
            mid++;
        }
        mid--;
        end=mid+1;
        cnt=k+1;
        while(cnt!=(2*k+1))
        {
            if(v[end]==1)
            {
                cnt++;
            }
            end++;
        }
        end--;
         
        while(end<v.size() && v[start]==v[mid] && v[mid]==v[end])
        {
            start++;
            mid++;
            end++;
            
        }
        if(end==v.size())
        {
            z.push_back(start-1);
            z.push_back(mid);
            return z;
        }
        else
        {
            z.push_back(-1);
            z.push_back(-1);
            return z;
        }
      //  cout<<start<<" "<<mid<<" "<<end;
      //  return v;
        
        
    }
};