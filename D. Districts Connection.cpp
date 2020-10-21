#include<bits/stdc++.h>
using namespace std;
#define F            first
#define S            second
#define PB           push_back
#define MP           make_pair
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define Precision(a) cout << fixed << setprecision(a)
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF9 2147483647
#define INF18 9223372036854775806
#define ll long long
#define ull unsigned long long
#define pp pair<int,int>
#define ppp pair<int,pp >
#define mapii map<int,int>
#define mapll map<ll,ll>
#define mapsi map<string,int>
#define mapss map<string,string>
#define yes printf("YES\n")
#define no printf("NO\n")
#define nn printf("\n")

char Uplowch(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
        ch += 32;
    return ch;
}
char Lowupch(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
        ch -= 32;
    return ch;
}
int ara[5555];
map<int,vector<int> > mp;
map<int,vector<int> > :: iterator it;

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;

    scanf("%d",&t);

    while(t--)
    {
        mp.clear();

        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            mp[ara[i]].push_back(i);
        }
        if(mp.size()==1)
        {
            no;
        }
        else{
                yes;
           mn = INF9;
           for(it = mp.begin();it!=mp.end();it++)
           {
               if(it->S.size()<mn)
               {
                   mn = it->S.size();
                   a = it->F;
               }
           }

        int mn2 = INF9;

            for(it = mp.begin();it!=mp.end();it++)
           {
               if(it->F!=a&&it->S.size()<mn2)
               {
                   mn2 = it->S.size();
                   b = it->F;
               }
           }
           sum = 0;
           int flag = 0;
           i = 0;
           j = 0;
           int flag2 = 0;

               while(i<mn&&j<mn2)
               {
                   if(flag==0)
                   {
                       printf("%d %d\n",mp[a][i],mp[b][j]);
                       flag = 1;
                       if(flag2==0)
                       {
                           flag2 = 1;
                           x = mp[a][i];
                       }
                       i++;
                       j++;
                       sum++;
                   }
                   else if(flag==1)
                   {
                       printf("%d %d\n",mp[a][i],mp[b][j-1]);
                       sum++;
                       flag=0;
                   }
               }

               for(j=mp[a].size();j<mn2;j++)
               {
                   printf("%d %d\n",x,mp[b][j]);
                   sum++;
               }
               for(it = mp.begin();it!=mp.end();it++)
               {
                   if(it->F==a||it->F==b)continue;
                   else{
                        y = it->F;
                    for(j=0;j<mp[y].size();j++)
                    {
                        printf("%d %d\n",x,mp[y][j]);
                    }
                   }
               }
        }
    }

    return 0;
}
