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
int ara[333][333];

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        flag = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d",&ara[i][j]);

                if((i==1&&j==1)||(i==1&&j==m)||(i==n&&j==1)||(i==n&&j==m))
                {
                    if(ara[i][j]>2)
                    {
                        flag = 1;
                    }
                }
                else if(i==1||i==n||j==1||j==m)
                {
                    if(ara[i][j]>3)
                        flag = 1;
                }
                else if(ara[i][j]>4)
                {
                    flag = 1;
                }
            }
        }

        if(flag==1)
        {
            no;
        }
        else
        {
            yes;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {

                    if((i==1&&j==1)||(i==1&&j==m)||(i==n&&j==1)||(i==n&&j==m))
                    {
                        printf("2 ");
                    }
                    else if(i==1||i==n||j==1||j==m)
                    {
                        printf("3 ");
                    }
                    else
                    {
                        printf("4 ");
                    }
                }
                nn;
            }

        }





    }

    return 0;
}
