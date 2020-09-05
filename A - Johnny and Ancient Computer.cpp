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

ll make(ll n)
{
    ll sum = 0;
    while(n%8==0)
    {
        n/=8;
        sum++;
    }

    while(n%4==0)
    {
        n/=4;
        sum++;
    }
    while(n%2==0)
    {
        n/=2;
        sum++;
    }
    if(n%2!=0&&n>1)
    {
        return -1;
    }

    return sum;
}
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        if(n==m)
        {
            printf("0\n");
            continue;
        }

        if((n%m!=0&&m%n!=0)||(n/m)%2==1||(m/n)%2==1)
        {
            printf("-1\n");
        }
        else{

            if(n>m)
            {
                printf("%lld\n",make(n/m));

            }
            else{
                 printf("%lld\n",make(m/n));
            }
        }




    }

























return 0;
}
