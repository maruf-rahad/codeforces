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
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,s;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&n,&k);

        while(k>1)
        {
            mx = -1;
            mn = 99;
            s = n;

            while(s!=0)
            {
                a = s%10;
                mx = max(mx,a);
                mn = min(mn,a);
                s/=10;
            }
            if(mn==0)
            {

                break;
            }
            else{
                n = n+mx*mn;
            }
            k--;

        }
        printf("%lld\n",n);






    }

























    return 0;
}
