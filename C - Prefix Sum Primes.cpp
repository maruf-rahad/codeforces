#include<bits/stdc++.h>
using namespace std;
int ara[4000025];
int ara2[400025];
int m = 400005;
vector<int>v;
void sieve()
{
   int i,j;
   v.push_back(2);
   ara2[1] = 1;
   int x = sqrt(m);
   for(i=3;i<=x;i+=2)
   {
       if(ara2[i]==0)
       {
           for(j=i*i;j<=m;j=j+2*i)
           {
               ara2[j] = 1;
           }
       }
   }
}
int main()
{
    v.clear();
    sieve();
    int n,a,b,i,j,sum,one,two,x,y;

    for(i=3;i<=m;i+=2)
    {
        if(ara2[i]==0)
        {
            v.push_back(i);
        }
    }

    while(scanf("%d",&n)==1)
    {
        sum = 0;
        one = 0;
        two = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
            if(ara[i]==1)one++;

            else two++;
        }
        x = 0;
        y = 0;
        int sub = 0;
        while(1)
        {

            if((two>0&&v[x]-sub>=2)||one==0)
            {
                two--;
                sub+=2;
                printf("2 ");

            }
            else if(one>0||two==0)
            {
                printf("1 ");
                one--;
                sub+=1;
            }

            if(sub>=v[x])
            {
                //printf("sub = %d\n",sub);
                x++;
            }


            if(two==0&&one==0)break;
        }
        printf("\n");


    }

return 0;
}

