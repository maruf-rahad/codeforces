#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[222222];
vector<int>v;

int make(int x,int a)
{
    if(x%a==0)return x/a;
    else return (x/a)+1;
}
int main()
{
    int a,b,n,m,t,x,y,flag,flag2,mx,mn,sum,total,k,i;
    string s,s2;
    char str;

    while(scanf("%d %d %d %d",&n,&a,&b,&k)==4)
    {
        v.clear();
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            x = ara[i]%(a+b);
            if(x==0)
            {
                v.push_back(b);
            }
            else if(x<=a)
            {
                sum++;
            }
            else if(x)
            {
                v.push_back(x-a);
            }

        }
        sort(v.begin(),v.end());

        for(i=0;i<v.size();i++)
        {
            x = make(v[i],a);

            if(x<=k)
            {
                sum+=1;
                k-=x;
            }

        }

        printf("%d\n",sum);

    }










    return 0;
}
