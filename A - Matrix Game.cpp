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
int ara[100][100];

bool check(int a,int b,int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(ara[i][b]==1)return false;
    }
    for(i=1;i<=m;i++)
    {
        if(ara[a][i]==1)return false;
    }

    return true;
}
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        memset(ara,0,sizeof(ara));

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        int flag = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(flag==0&&ara[i][j]==0&&check(i,j,n,m))
                {
                    flag = 1;
                    ara[i][j] = 1;
                }
                else if(flag==1&&ara[i][j]==0&&check(i,j,n,m))
                {
                    flag = 0;
                    ara[i][j] = 1;
                }
            }
        }
        if(flag==0)
        {
            printf("Vivek\n");
        }
        else printf("Ashish\n");





    }

























return 0;
}
