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
bool make(int n)
{
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v2[i])return false;
    }
    return true;

}
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        v.clear();
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a);
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            mn = 99999;
            int flag = 0;
            for(i=1;i<=1024;i++)
            {
                v2.clear();
                for(j=0;j<n;j++)
                {
                    a = v[j]^i;
                    v2.push_back(a);
                }
                sort(v2.begin(),v2.end());
                if(make(n))
                {
                    flag = 1;
                    mn = min(mn,i);
                }

            }
            if(flag==0)
            {
                printf("-1\n");
            }
            else{
                printf("%d\n",mn);
            }





    }

























return 0;
}
