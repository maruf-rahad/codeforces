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
vector<int>v2;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        v.clear();
        v2.clear();
        for(i=1; i<=2*n; i++)
        {
            scanf("%d",&a);
            if(a%2==0)
            {
                v.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        sum = 0;

        x = v.size();
        y = v2.size();

        if(x%2==1)
        {
            x--;
        }

        if(y%2==1)
        {
            y--;
        }
        n = 2*n-2;

      //  printf("%d %d\n\n\n",x,y);

        for(i=0; i<x&&sum<n; i++)
        {
            printf("%d %d\n",v[i],v[i+1]);
            sum+=2;
            i++;


        }
        for(i=0; i<y&&sum<n; i++)
        {
            printf("%d %d\n",v2[i],v2[i+1]);
            sum+=2;
            i++;

        }
        printf("\n");




    }

























    return 0;
}
