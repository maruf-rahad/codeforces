#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y;
    string s,s2;
    while(scanf("%d",&n)==1)
    {
 
        s.clear();
        i = 1;
        while(s.size()<=n)
        {
             stringstream ss;
            ss<<i;
            s+=ss.str();
            i++;
 
        }
        printf("%c\n",s[n-1]);
    }
return 0;
}