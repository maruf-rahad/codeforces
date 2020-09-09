#include<bits/stdc++.h>
using namespace std;
int ara[11];
void zero()
{
    for(int i = 0;i<=10;i++)
    {
        ara[i] = 0;
    }
}
int main()
{
    int n,a,b,i,j;
    char ch[200];
    while(scanf("%d",&n)==1)
    {
        scanf("%s",&ch);
        int l = strlen(ch);
        int sum = 0;

        for(i=0;i<l;i++)
        {
            if(ch[i]=='8')
            {
                sum++;
            }
        }
        int flag = 0,total = 0;


        while(flag==0)
        {
            if(sum == 0||l<=0)
            {
                flag=1;
                break;
            }

                sum--;
                l = l-11;
                if(l>=0&&sum>=0)
                {
                    total++;
                }
        }

        printf("%d\n",total);


    }

return 0;
}

