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

int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        if(n%4!=0)
        {
            printf("NO\n");
            continue;
        }

            printf("YES\n");

            ll sub = 0;
            ll sum = 0;
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    printf("%lld ",i);
                    sum+=i;
                }
            }
            for(i=1;i<=n-2;i++)
            {
                if(i%2==1)
                {
                    printf("%lld ",i);
                    sub+=i;


                }
            }
            printf("%lld",sum-sub);
            printf("\n");




    }

























return 0;
}
