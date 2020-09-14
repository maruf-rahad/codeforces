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

int ara[1111];
int ara2[1111];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        a = 0;
        b = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);

            if(ara[i]==1)a++;
            else b++;
        }
        if(b>=(n+1)/2)
        {
            printf("%d\n",(n+1)/2);
            for(i=1;i<=(n+1)/2;i++)printf("0 ");
        }
        else{
            a = n/2;
            if(a%2==1)a++;
              printf("%d\n",a);
            for(i=1;i<=a;i++)printf("1 ");
        }

        printf("\n");
    }

    return 0;
}
