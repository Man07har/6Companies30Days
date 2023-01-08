class Solution {
public:
string getHint(string secret, string guess)
{
map<char,int>x;
map<char,int>y;
int bull=0,cow=0;
for(int i=0;i<secret.length();i++)
{
if(secret[i]==guess[i])
bull++;
else
{
if(y[secret[i]]>0)
{
y[secret[i]]--;
cow++;
}
else
{
x[secret[i]]++;
}
if(x[guess[i]]>0)
{
x[guess[i]]--;
cow++;
}
else
{
y[guess[i]]++;
}
}
}
return to_string(bull)+'A'+to_string(cow)+'B';
}
};