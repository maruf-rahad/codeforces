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
vector<ll>v;

bool cal(ll k)
{
    ll flag = 0,sum = 1;
    for(int i=0; i<=9; i++)
    {
        sum = sum*v[i];
        if(sum>=k)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)return true;
    return false;
}

void make(ll k)
{
    for(int i=0; i<10; i++)
    {
        v.push_back(1);
    }
    int flag = 0,i,j;

        for(i=1;i<=20000;i++)
        {
            for(j=0;j<=9;j++)
            {
                v[j]++;
                if(cal(k))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)break;
        }


}
int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    while(scanf("%lld",&k)==1)
    {
        v.clear();
        if(k==1)
        {
            printf("codeforces\n");
            continue;
        }
        make(k);
        char ch[10] = {'c','o','d','e','f','o','r','c','e','s'};

        for(i=0;i<10;i++)
        {
            for(j=0;j<v[i];j++)
            {
                printf("%c",ch[i]);
            }
        }
        printf("\n");



    }


























    return 0;
}
