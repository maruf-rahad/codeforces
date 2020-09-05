
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
vector<ll>v[111111];
void make(ll n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[i].push_back(j);
        }
    }
}
    ll ara[111111];
    ll cnt[111111];
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n+10;i++)cnt[i] = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
            cnt[i] = 1;
        }

        for(i=1;i<=n;i++)
        {
            for(j=i+i;j<=n;j+=i)
            {
                if(ara[i]<ara[j])
                {
                    cnt[j] = max(cnt[j],cnt[i]+1);
                }

            }
        }

        printf("%lld\n",*max_element(cnt+1,cnt+1+n));




    }

























return 0;
}
