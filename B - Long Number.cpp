#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ara[10];

    int a,b,i,j,sum,n;

    while(scanf("%d",&n)==1)
    {
        cin>>s;
        for(i=1;i<=9;i++)
        {
            scanf("%d",&ara[i]);
        }

        int l = s.size();
        int flag = 0;
        for(i=0;i<l;i++)
        {
            a = s[i]-'0';
            if(a>=ara[a])
            {
                printf("%d",a);
            }
            else{
                break;
            }

        }
        for(j=i;j<l;j++)
        {
            a = s[j]-'0';
            if(a<=ara[a])
            {
                printf("%d",ara[a]);
            }
            else
                break;
        }
        for(i=j;i<l;i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");

    }










return 0;
}

