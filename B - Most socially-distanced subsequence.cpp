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
int ara[111111];
vector<int>v,v2;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)scanf("%d",&ara[i]);

        v.clear();
        v2.clear();
        int flag = 0;
        v.push_back(ara[1]);
        if(ara[2]>ara[1])
        {
            for(i=2; i<=n; i++)
            {
                if(flag==0&&ara[i]>ara[i-1])
                {

                }
                else if(flag==0)
                {
                    flag = 1;
                    v.push_back(ara[i-1]);
                }
                else if(flag==1&&ara[i]<ara[i-1])
                {

                }
                else if(flag==1)
                {
                    flag = 0;
                    v.push_back(ara[i-1]);
                }
            }
            v.push_back(ara[n]);

        }
        else{
            for(i=2;i<=n;i++)
            {
                if(flag==0&&ara[i]<ara[i-1])
                {

                }
                else if(flag==0)
                {
                    v.push_back(ara[i-1]);
                    flag = 1;
                }
                else if(flag==1&&ara[i]>ara[i-1])
                {

                }
                else if(flag==1)
                {
                    flag = 0;
                    v.push_back(ara[i-1]);
                }
            }
            v.push_back(ara[n]);



        }
        x = v.size();
        printf("%d\n",x);

        for(i=0;i<x;i++)
        {
            printf("%d ",v[i]);
        }

        printf("\n");


    }

























    return 0;
}
