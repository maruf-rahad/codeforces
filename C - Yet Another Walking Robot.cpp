#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<int,int> ,int>mp;
char ch[222222];
int main()
{
    int a,b,n,m,t,y,flag,flag2,mx,mn,sum,total,x,i;
    string s,s2;
    char str;
    scanf("%d",&t);
    while(t--)
    {
        mp.clear();
         pair<int,int>z;
        scanf("%d",&n);
        getchar();
        scanf("%s",&ch);
        x = 0;
        y = 0;
        z = make_pair(x,y);
        mp[z] = 0;

        mn = 999999999;
        for(i=0;i<n;i++)
        {
            if(ch[i]=='L')
            {
                x-=1;
            }
            else if(ch[i]=='R')
            {
                x+=1;
            }
            else if(ch[i]=='U')
            {
                y+=1;
            }
            else if(ch[i]=='D')
            {
                y-=1;
            }

            z = make_pair(x,y);
            if(mp.find(z)==mp.end())
            {
                mp[z] = i+1;
            }
            else{
               int xx = mp[z];
               if(abs(xx-(i+1))<mn)
               {
                   mn = abs(xx-(i+1));
                   a = mp[z];
                   b = i+1;
               }
               mp[z] = i+1;
            }
        }
        if(mn==999999999)
        {
            printf("-1\n");
        }
        else{
            printf("%d %d\n",a+1,b);
        }
    }










return 0;
}
