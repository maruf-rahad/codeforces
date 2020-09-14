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
#define c continue
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
ll ara[111111];

int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }
        i = 1;
        j = 1;
        flag = 0;
        while(1)
        {
            if(i>n||j>n||(i==j&&i==n)||(i==n&&ara[i]==0)||(j==n&&ara[j]==0))break;


            if(ara[i]<=0)
            {
                i++;
                c;
            }
            else if(ara[j]>=0||j<=i)
            {
                j++;
                c;
            }
            else if(ara[i]>0&&ara[j]<0&&i<j)
            {
                a = min(abs(ara[i]),abs(ara[j]));
                ara[i]-=a;
                ara[j]+=a;
                if(ara[i]==0)i++;
                else j++;
            }

            if(i>n||j>n||(i==j&&i==n)||(i==n&&ara[i]==0)||(j==n&&ara[j]==0))break;

        }

        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(ara[i]>0)sum+=ara[i];
        }

        printf("%lld\n",sum);






    }

    return 0;
}
