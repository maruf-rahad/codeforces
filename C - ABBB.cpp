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

int ara[222222];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        cin>>s;
        n = s.size();
        flag = 0;
        sum = 0;
        a = 0;
        b = 0;
        int tot = 0;

        x = n;
        for(i=0;i<=n+10;i++)ara[i] = 0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
                //printf("%d %d\n",a,b);

                if(a>0&&b>0)
                {
                    a--;
                    b--;
                    x-=2;
                }
                if(b==2)
                {
                    x-=2;
                    b-=2;
                }
            }
        }
        printf("%d\n",x);



    }

    return 0;
}
