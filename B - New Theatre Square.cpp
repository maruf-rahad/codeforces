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

char ch[110][1010];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&n,&m,&x,&y);
        sum = 0;
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='.')sum++;
            }
            getchar();
        }

        if(x*2<=y)
        {
            printf("%d\n",sum*x);
        }
        else{
            sum = 0;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                {
                    if(ch[i][j]=='.'&&ch[i][j+1]=='.'&&j+1<=m)
                    {
                        sum+=y;
                        j++;
                    }
                    else if(ch[i][j]=='.'){
                        sum+=x;
                    }

                }
            }
            printf("%d\n",sum);
        }



    }

























return 0;
}
