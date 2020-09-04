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
set<ll>st;
void make()
{
    ll sum = 2;
    for(ll i=1; i<=40; i++)
    {
        sum = sum*2;
        st.insert(sum);
    }
}

bool prime(ll n)
{
    ll i,s = sqrt(n);

    for(i=2;i<=s;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        {
            printf("FastestFinger\n");
            continue;
        }
       else if(n%2==1||n==2)
        {
            printf("Ashishgup\n");
             continue;
        }

        sum = 0;
        while(n%2==0)
        {
            n/=2;
            sum++;
        }

        if((sum>=2&&n>1)||(sum==1&&!prime(n)))
        {
            printf("Ashishgup\n");
        }

        else{
           printf("FastestFinger\n");
        }



    }

    return 0;
}
