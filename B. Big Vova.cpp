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
vector<int>v;


int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%d",&t);

    while(t--)
    {
        v.clear();
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());


        int gcd = v[n-1];
        for(i=n-1; i>=0; i--)
        {
            sum = -1;
            for(j=0; j<n; j++)
            {
                if(v[j]>0)
                {

                    a  = __gcd(gcd,v[j]);

                    if(a>sum)
                    {
                        sum = a;
                        b = j;
                    }

                }
            }
            printf("%d ",v[b]);
            v[b] = -1;
            gcd = sum;

        }

        printf("\n");





    }

    return 0;
}

