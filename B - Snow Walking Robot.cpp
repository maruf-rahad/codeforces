#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag,t,u,d,r,l;
    string s,s2;

    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        a = s.size();
        sum = 0;
        u = 0,r = 0,d = 0,l = 0;

        for(i=0;i<a;i++)
        {
            if(s[i]=='R')r++;
            else if(s[i]=='L')l++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d++;
        }
        a = min(r,l);
        b = min(u,d);
        if(a==0&&b>0)
        {
            printf("2\nUD\n");
            continue;
        }
        if(b==0&&a>0)
        {
            printf("2\nLR\n");
            continue;
        }
        sum = a+b;


        printf("%d\n",sum*2);

        for(i=0;i<min(r,l);i++)
        {
            printf("L");
        }

        for(i=0;i<min(u,d);i++)
        {
            printf("D");
        }
        for(i=0;i<min(r,l);i++)
        {
            printf("R");
        }

        for(i=0;i<min(u,d);i++)
        {
            printf("U");
        }

        printf("\n");

    }










return 0;
}

