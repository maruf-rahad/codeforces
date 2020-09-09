#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[500005];
    int n,a,b,c,d,i,j,flag1,flag2,flag3,flag4,l,sum;

    while(scanf("%s",&ch)==1)
    {
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        sum = 0;

        l  =  strlen(ch);

        for(i=0;i<l;i++)
        {
            if(ch[i]=='[')
            {
                a = i;
                flag1 = 1;
                break;
            }
        }
        for(i = l-1;i>a;i--)
        {
            if(ch[i]==']')
            {
                flag2 = 1;
                b = i;
                break;
            }
        }
        for(i=a+1;i<b;i++)
        {
            if(ch[i]==':')
            {
                flag3 = 1;
                c = i;
                break;
            }
        }
        for(i=b-1;i>c;i--)
        {
            if(ch[i]==':')
            {
                flag4 = 1;
                d = i;
                break;
            }
        }

        for(i=c+1;i<d;i++)
        {
            if(ch[i]=='|')
            {
                sum++;
            }
        }

       // printf("%d %d %d %d   %d\n",a,c,d,b,sum);

        if(flag1==1&&flag2==1&&flag3==1&&flag4==1)
        {
            printf("%d\n",sum+4);
        }
        else{
            printf("-1\n");
        }




    }









return 0;
}

