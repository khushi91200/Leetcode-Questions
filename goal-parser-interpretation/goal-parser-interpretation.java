class Solution {
    public String interpret(String s) 
    {
        String k="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='G')
            {
                k=k+"G";
            }
            else if(s.charAt(i)=='(')
            {
                if(s.charAt(i+1)=='a')
                {
                    k=k+'a';
                    k=k+'l';
                    i+=3;
                }
                else
                {
                    k=k+'o';
                    i++;
                }
            }
        }
        return k;
        
    }
}