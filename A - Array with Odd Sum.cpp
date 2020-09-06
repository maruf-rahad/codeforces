#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[22222];
int main()
{
    int a,b,n,m,t,x,y,flag,flag2,mx,mn,sum,total,i,j;
    string s,s2;
    char str;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        flag = 0;
        flag2 = 0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
            if(ara[i]%2==0)
            {
                flag = 1;
            }
            else if(ara[i]%2==1)
            {
                flag2 = 1;
            }
        }
        if(sum%2==1){
            printf("YES\n");
        }
        else if(flag2==1&&flag==1){
           printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }










return 0;
}
