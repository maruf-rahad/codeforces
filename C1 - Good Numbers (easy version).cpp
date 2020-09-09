#include<bits/stdc++.h>
using namespace std;

int ara[10];
int used[10];
int n,mi;
void sett()
{
    ara[0] = 1;
    int sum = 1;
    for(int i=1;i<=9;i++)
    {
        sum = sum*3;
        ara[i] = sum;
    }

}


void recur(int sum,int att)
{
    if(att==10)return;

    if(sum>=n)
    {
        //printf("yes %d %d\n",sum,att);
            mi = min(mi,sum);
            return;
    }


        recur(sum+ara[att],att+1);
        recur(sum,att+1);

}
int main()
{
    int m,a,b,i,j,x,y,sum,flag,t;

    sett();

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        mi = 99999999;
        recur(0,0);

        if(mi==99999999)
        {
            printf("%d\n",ara[9]);
        }
        else{
            printf("%d\n",mi);
        }
    }










return 0;
}

