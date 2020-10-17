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
#define yes printf("YES\n")
#define no printf("NO\n")
#define nn printf("\n")

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
vector<int>v;
int ara[111];
int ara2[111];

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,sub;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        sum = 0;
        sub = 0;
        v.clear();
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara2[i]);

            if(ara2[i]==0)
            {
                v.push_back(ara[i]);
            }
        }

        sort(v.begin(),v.end());

        x = v.size()-1;

        for(i=1; i<=n; i++)
        {
            if(ara2[i]==1)
                printf("%d ",ara[i]);
            else
            {
                printf("%d ",v[x]);
                x--;
            }
        }

        printf("\n");



    }





    return 0;
}
