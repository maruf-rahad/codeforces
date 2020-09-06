#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
map<int,int>mp2;
map<int,int> :: iterator it;
int ara[200015];
int ara2[200015];
int ara3[200015];
int main()
{
    int n,m,t,a,b,i,j,x,y,sum,flag;
    string s,s2;
    char ch;

    while(scanf("%d",&n)==1)
    {
        mp.clear();
        mp2.clear();
        memset(ara2,0,sizeof(ara2));
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]!=0)
            {
                mp[ara[i]] = 1;
                ara2[ara[i]] = 1;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(ara2[i]==0)
            {
                mp2[i] = 1;
            }
        }
        flag = 0;
        for(i=n; i>=1; i--)
        {
            if(ara[i]==0)
            {
                for(it = mp2.begin(); it!=mp2.end(); it++)
                {

                    a = it->first;

                    if(a!=i)
                    {
                        if(flag==0)
                        {
                            flag = 1;
                            x = i;
                        }
                        break;
                    }
                }
                ara[i] = a;
                if(i==a)
                {
                    swap(ara[x],ara[i]);
                }

                 mp2.erase(a);


            }
        }
            for(i=1; i<=n; i++)
            {
                printf("%d ",ara[i]);
            }
            printf("\n");



    }











    return 0;
}

