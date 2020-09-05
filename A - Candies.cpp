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
vector<ll>v;
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%lld",&t);
    sum = 1;
    v.push_back(1);
    for(i=1;i<=32;i++)
    {
        sum = sum*2;
        b = v[i-1];
        v.push_back(sum+b);
    }

    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<v.size();i++)
        {
            if(n%v[i]==0)
            {
                printf("%lld\n",n/v[i]);
                break;
            }
        }




    }

























return 0;
}
