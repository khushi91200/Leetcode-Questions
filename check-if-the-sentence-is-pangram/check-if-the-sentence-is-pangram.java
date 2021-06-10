class Solution {
    public boolean checkIfPangram(String s) 
    {
        if(s.length()<26)
        {
            return false;
        }
        int[] arr=new int[26];
        Arrays.fill(arr,0);
        for(int i=0;i<s.length();i++)
        {
            arr[s.charAt(i)-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                return false;
            }
        }
        return true;
        
    }
}