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
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int tot = 0;
        sum  = 1;
        int x = 0;

        for(i=0;i<n;i++)
        {
            if(sum+x>=v[i])
            {
                if(x==0)sum++;
                else sum+=x+1;


                x = 0;
            }
            else{
                x++;
            }
        }

        printf("%d\n",sum);








    }

























return 0;
}

