#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag,t;
    string s,s2;
    int ara[3];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            cin>>ara[0]>>ara[1]>>ara[2];
            sort(ara,ara+3);

            ara[0]++;
            ara[2]--;
            sum = ara[2]-ara[1]+ara[2]-ara[0]+ara[1]-ara[0];
            if(sum<0)printf("0\n");
            else printf("%d\n",sum);
        }
    }










return 0;
}
