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
vector<ll>v;
vector<ll>v2;

int main()
{
    ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,flag2,sum2;

    scanf("%lld",&t);

    while(t--)
    {
        v.clear();
        v2.clear();
        scanf("%lld",&n);
        k = 0;
        j = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            if(a>=0)
            {
                k++;
                v.push_back(a);
            }
            else
            {
                j++;
                v2.push_back(-a);
            }
        }

        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());

        i = k;
        i--;
        j--;
        n = i;
        m = j;
        flag = 0;
        flag2 = 0;
        x = 0;
        y = 0;
        sum2 = 1;
        ll k = 5;
        sum = 1;
        while(k>0)
        {
            if(x<=n&&y<=m)
            {
                if(v[x]<v2[y])
                {
                    sum2*=v[x];
                    x++;
                }
                else
                {
                    sum2*=-v2[y];
                    y++;
                }
            }
            else if(x<=n)
            {
                sum2*=v[x];
                x++;
            }
            else if(y<=m)
            {
                sum2*=-v2[y];
                y++;
            }

            if(i>=0&&j>=0)
            {
                if(v[i]>v2[j])
                {
                    sum*=v[i];
                    i--;
                    flag = 1;
                }
                else
                {
                    sum*=(-v2[j]);
                    j--;
                    flag2 = 1;
                }
            }
            else if(i>=0)
            {
                sum*=v[i];
                i--;
                flag = 1;
            }
            else if(j>=0)
            {
                sum*=(-v2[j]);
                j--;
                flag2 = 1;
            }
            k--;
        }
        ll tot = sum;

        if(sum<0&&j>=0&&flag==1)
        {
            x = sum/(v[i+1]);
            x*=(-v2[j]);
            tot = max(tot,x);
        }
        if(sum<0&&i>=0&&flag2==1)
        {
            y = sum/v2[j+1];
            y*=(-v[i]);
            tot = max(tot,y);
        }
        printf("%lld\n",max(tot,sum2));
    }
    return 0;
}

