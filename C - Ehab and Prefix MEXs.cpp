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
mapii mp;

set<int>st;
int ara[111111];
int ara2[111111];
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;

        while(scanf("%d",&n)==1)
        {


        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        vector<int>v(n+2,-1);

        st.clear();
        for(i=0;i<=n;i++)
        {
            st.insert(i);
        }

        x = 0;

        for(i=1;i<=n;i++)
        {
            if(ara[i] !=x )
            {
                v[i] = x;
                st.erase(x);
            }
            x = ara[i];
        }

        st.erase(ara[n]);

        for(i=1;i<=n;i++)
        {
            if(v[i]==-1)
            {
                v[i] = *st.begin();
                st.erase(st.begin());
            }
        }

        for(i=1;i<=n;i++)
        {
            printf("%d ",v[i]);
        }
        printf("\n");






    }

























return 0;
}
}
