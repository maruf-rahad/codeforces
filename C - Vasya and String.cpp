#include<bits/stdc++.h>
using namespace std;
char ch[100010];
int main()
{
    int n,m,a,b,i,j,x,y,flag,s,sum,sum2,ans,mx;

    while(scanf("%d %d",&m,&n)==2)
    {
        scanf("%s",&ch);
        s = strlen(ch) -1;
        mx = -9;
        i = 0;
        j = 0;
        sum = 0;
        sum2 = 0;
        ans = 0;
        while(1)
        {
            if(ch[i]=='a')sum++;
            else sum2++;

            ans = max(sum,sum2);
            mx  = max(ans,mx);
            if(min(sum,sum2)>n)
            {
                if(ch[j]=='a')sum--;
                else sum2--;
                j++;
            }
            ans = sum+sum2;
            mx  = max(ans,mx);
            i++;
            if(i>s)break;
        }

        printf("%d\n",mx);





    }













return 0;
}
