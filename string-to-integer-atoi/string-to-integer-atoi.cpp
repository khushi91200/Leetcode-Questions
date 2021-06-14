class Solution {
public:
int myAtoi(string s) {
if(!(s.length()))
return 0;
long long int result=0;
int in=1;
int i=s.find_first_not_of(' ');
if(i==(-1)) //if all match
return 0;
if(s[i]=='-'||s[i]=='+')
in=(s[i++]=='-') ? -1:+1;
while('0'<=s[i]&&s[i]<='9'){
result=result *10+(s[i++]-'0');
if(result * in >= INT_MAX) return INT_MAX;
if(result *in<= INT_MIN) return INT_MIN;
}
return result *in;
}
};