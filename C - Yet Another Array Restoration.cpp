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
#define nn printf("\n")
#define no printf("NO\n")
#define yes printf("YES\n")
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
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld %lld",&n,&a,&b);

        m = n;
        n--;

        x = (b-a);
        sum = 1;
        while(x%n!=0)
        {
            n--;
        }

        n = (b-a)/n;

        printf("%lld ",a);

        for(i=a+n;i<=b;i+=n)
        {
            if(sum==m)break;
            printf("%lld ",i);
            sum++;
        }

        for(i=a-n;i>=1;i-=n)
        {
            if(sum==m)break;

            printf("%lld ",i);
            sum++;
        }

        for(i=b+n;i<=1e9+10;i+=n)
        {
            if(sum==m)break;

            printf("%lld ",i);
            sum++;
        }

        printf("\n");







    }

    return 0;
}
