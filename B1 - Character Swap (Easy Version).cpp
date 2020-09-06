#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t,sum,flag,flag2;
    string s1,s2;
    char str1,str2,ch1,ch2;
 
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            sum=0;
            flag = 0;
            flag2 = 0;
            scanf("%d",&n);
            cin>>s1>>s2;
 
            for(i=0;i<n;i++)
            {
                if(s1[i]!=s2[i])
                {
                    sum++;
                   if(flag==0)
                   {
                         flag = 1;
                        str1 = s1[i];
                        ch1 = s2[i];
                   }
                   else {
                    str2 = s1[i];
                    ch2 = s2[i];
                   }
                }
            }
            if(sum==0)printf("Yes\n");
            else if(sum==2&&str1==str2&&ch1==ch2)
                printf("Yes\n");
            else printf("No\n");
        }
    }
return 0;
}