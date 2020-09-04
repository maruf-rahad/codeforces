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
        scanf("%lld %lld %lld",&a,&b,&n);
        x = a;
        y = b;
        int flag = 0;
        sum = 0;

        while(a<=n&&b<=n)
        {
            if(flag==0)
            {
                a+=b;
                flag = 1;
            }
            else
            {
                flag = 0;
                b+=a;
            }
            sum++;
        }
        k = 0;
        flag = 0;

        while(x<=n&&y<=n)
        {
            if(flag==0)
            {
                y+=x;
                flag= 1;
            }
            else{
                x+=y;
                flag = 0;
            }
            k++;
        }
        printf("%lld\n",min(k,sum));




    }

























return 0;
}
