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
int ara[333333];
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,sum2,sum3;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        cin>>s;

        for(i=0;i<=n+10;i++)ara[i] = 0;

        x = 0;
        y = 0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='>')x++;
            else if(s[i]=='<')y++;

            if(s[i]=='-')
            {
                ara[i] = 1;
                ara[i+1] = 1;
            }
        }
        if(s[n-1]=='-')
        {
            ara[0] = 1;
            ara[n-1] = 1;
        }
        sum = 0;
        if(x==0||y==0)printf("%d\n",n);
        else{

            for(i=0;i<n;i++)
            {
                if(ara[i]==1)sum++;

            }
            printf("%d\n",sum);

        }









    }

    return 0;
}
