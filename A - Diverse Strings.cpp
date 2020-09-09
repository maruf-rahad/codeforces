#include<bits/stdc++.h>
using namespace std;
int ara[27];

void zero()
{
    for(int i=0;i<=26;i++)
    {
        ara[i] = 0;

    }
}
int main()
{
    int n,a,b,i,j,x,y,flag,flag2,flag3,flag4;
    char ch;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            zero();
            flag = 0;
            flag2 = 0;
            flag3 = 0;
            flag4 = 0;
            b = 27;
            string s;
            cin>>s;

            for(i=0;i<s.size();i++)
            {
                a = s[i]-96;
                ara[a]++;
            }
            for(i=1;i<=26;i++)
            {
                if(ara[i]>=2)
                {
                    flag = 1;
                    break;
                }
                else if(flag2==0&&ara[i]==1)
                {
                    flag2 = 1;
                }
                else if(flag2==1&&ara[i]==0)
                {
                    b = i;
                    break;
                }

            }

            for(i=b;i<=26;i++)
            {
                if(ara[i]>=1)
                {

                    flag = 1;
                    break;
                }
            }

            if(flag==0)
            {
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }










return 0;
}

