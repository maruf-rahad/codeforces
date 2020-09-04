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
int ara[111111];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,sum2 = 0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        sum = 0;
        sum2 = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        sum2 = sum;

        i = 1;
        j = n;
        x = n;

        if(sum%m!=0)
        {
            printf("%d\n",n);
            continue;
        }
        x = 0;
        int flag = 0,flag2 = 0;
        for(i=1;i<=n;i++)
        {
            if((sum-ara[i])%m!=0)
            {
                flag = 1;
                x = n-i;
                break;
            }
            sum-=ara[i];
        }

        y = 0;

        for(i=n;i>=1;i--)
        {
            if((sum2-ara[i])%m!=0)
            {
                y = i-1;
                flag2 = 1;
                break;
            }
            sum2-=ara[i];

        }

        if(flag==1&&flag2==1)
        {
            printf("%d\n",max(x,y));
        }
        else if(flag == 1)
        {
            printf("%d\n",x);
        }
        else if(flag2==1)
        {
            printf("%d\n",y);
        }
        else{
            printf("-1\n");
        }




    }

























return 0;
}
