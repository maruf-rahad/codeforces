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
int ara[1000];
int ara2[1000];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara2[i]);
        }

        int flag = 0,flag2 = 0,flag3 = 0,flag4 = 0;

        for(i=1;i<=n;i++)
        {
            if(ara2[i]==1)
            {
                flag = 1;
            }
            if(ara2[i]==0)
            {
                flag2 = 1;
            }
        }

        for(i=2;i<=n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                flag3 = 1;
            }
        }
        if(flag3==0||(flag==1&&flag2==1))
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }




































return 0;
}
