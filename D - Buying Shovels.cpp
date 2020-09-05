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

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        int flag = 0;
        if(m>=n)
        {
            printf("%d\n",1);
            continue;
        }
        else{
           x = sqrt(n);
           mn = n;
           for(i=x;i>=1;i--)
           {
               if(i>m)continue;
               if(n%i==0)
               {
                   a = i;
                   mn = min(mn,n/a);
                   if(n/a<=m)
                   {
                       mn = min(mn,i);
                   }
               }
           }
        }

            printf("%d\n",mn);



    }

























return 0;
}
