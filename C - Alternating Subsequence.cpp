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

ll maxi(ll a ,ll b)
{
    if(a>b)return a;
    else return b;
}

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
ll ara[222222];
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }
        sum = 0;
        for(i=1;i<=n;i++)
        {
            mx = -INF9;
            if(ara[i]>0)
            {
               while(ara[i]>0&&i<=n)
               {
                   mx = maxi(mx,ara[i]);
                   i++;
               }
                 sum+=mx;
                 i--;
            }
            else{
                    mx = -INF9;
                while(ara[i]<0&&i<=n)
                {
                    mx = maxi(mx,ara[i]);
                    i++;
                }
                sum+=mx;
                i--;
            }
        }
        printf("%lld\n",sum);
    }










    return 0;
}
