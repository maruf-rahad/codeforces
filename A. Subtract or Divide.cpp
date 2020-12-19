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
double ara[111];
vector<ppp>v;
int main()
{
    int t,n,a,b,i,j,x,y,mx,mn,k=0,flag,flag2;

    string s,s2,s3;
    double m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1)printf("0\n");
        else if(n==2)printf("1\n");
        else if(n%2==0||n==3)printf("2\n");
        else printf("3\n");




    }

    return 0;
}
