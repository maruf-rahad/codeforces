#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int ara[3];
    int n,m,t,a,b,i,j,x,y,sum,flag,flag2,c;
    string s,s2;
    char ch;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&ara[0],&ara[1],&ara[2]);

      sort(ara,ara+3);

    if(ara[2]-ara[0]>ara[1]+1)
    {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }

    }










return 0;
}

