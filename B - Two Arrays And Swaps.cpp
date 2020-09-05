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
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        v.clear();
        v2.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
          for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v2.push_back(a);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());

        sum = 0;
        int tot = 0;
        i = 0;
        j = n-1;

        while(sum<m&&i<=n&&j>=0)
        {
            if(v[i]<v2[j])
            {
                tot+=v2[j];
                sum++;
                i++;
                j--;

            }
            else
            {
                tot+=v[i];
                i++;
                sum++;
            }
        }



        for(k=i;k<n;k++)
        {
            tot+=v[k];
        }

        printf("%d\n",tot);




    }

























return 0;
}
