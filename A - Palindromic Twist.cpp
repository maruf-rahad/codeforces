#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int n,a,b,i,j,x,y,m;

    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        scanf("%d %s",&m,&ch);
        int l =strlen(ch);
        int flag = 0;
        for(i=0;i<m/2;i++)
        {
            a = ch[i]-'0';
            b = ch[l-i-1]- '0';
            if(abs(a-b)!=2&&abs(a-b)!=0)
            {
               // printf("%d\n",abs(a-b));
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }











return 0;
}

