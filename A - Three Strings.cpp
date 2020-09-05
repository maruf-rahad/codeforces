#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,i,j,x,y,flag;
    string s,s2,s3;
    scanf("%d",&t);
    while(t--)
    {
        flag = 0;
        cin>>s>>s2>>s3;

        for(i=0;i<s.size();i++)
        {
            if(s[i]!=s3[i]&&s2[i]!=s3[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)printf("NO\n");
        else printf("YES\n");
    }








return 0;
}
