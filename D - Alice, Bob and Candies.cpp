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
int ara[222222];
int main()
{
    ll t,n,m,a,b,i,j,x,y,mxa,mxbb,sum,k=0,flag;
    scanf("%lld",&t);
    string s;
    while(t--)
    {
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&ara[i]);
        }

        x = 0;
        y = 0;
        mxa = 0;
        mxbb = 0;
        flag = 0;
        sum = 0;
        i = 0;
        j = n;
        while(i<=j)
        {
            sum++;
            if(flag==0)
            {
                mxa = 0;
                while(mxa<=mxbb&&i<=j)
                {
                    mxa+=ara[i];
                    i++;
                }
                flag = 1;
                x+=mxa;
            }
            else{
                mxbb = 0;
                while(mxbb<=mxa&&j>=i)
                {
                    mxbb+=ara[j];
                    j--;
                }
                   flag=0;
                   y+=mxbb;
            }


        }
        printf("%lld %lld %lld\n",sum,x,y);




    }

























return 0;
}
