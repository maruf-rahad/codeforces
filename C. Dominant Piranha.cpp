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
char ch[222][222];
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,sum2,sum3;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        scanf("%d",&n);
        mx = -1;
        flag = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
            mx = max(mx,ara[i]);
        }

        for(i=2;i<=n;i++)
        {
            if(ara[i]!=ara[i-1])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else if(ara[1]==mx&&ara[1]>ara[2])
        {
            printf("%d\n",1);
        }
        else if(ara[n]==mx&&ara[n]>ara[n-1])
        {
            printf("%d\n",n);
        }
        else{

            for(i=2;i<=n-1;i++)
            {
                if(ara[i]==mx&&(ara[i]>ara[i-1]||ara[i]>ara[i+1]))
                {
                    printf("%d\n",i);
                    break;
                }

            }


        }






    }

    return 0;
}
