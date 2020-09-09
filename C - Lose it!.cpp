#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[7],a,b,i,j,n;

    while(scanf("%d",&n)==1)
    {
        for(int i = 0;i<=6;i++)
        {
            ara[i] = 0;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a==4)
            {
                ara[1]++;
            }
            else if(a==8&&ara[1]>ara[2])
            {
                ara[2]++;
            }
            else if(a==15&&ara[2]>ara[3])
            {
                ara[3]++;
            }
            else if(a==16&&ara[3]>ara[4])
            {
                ara[4]++;
            }
            else if(a==23&&ara[4]>ara[5])
            {
                ara[5]++;
            }
            else if(a==42&&ara[5]>ara[6])
            {
                ara[6]++;
            }
        }

        int x = min(ara[1],min(ara[2],min(ara[3],min(ara[4],min(ara[5],ara[6])))));

        if(x==0)
        {
            printf("%d\n",n);
        }
        else{

            printf("%d\n",n-x*6);
        }



    }









return 0;
}

