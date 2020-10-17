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

vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,sum2,sum3;
    scanf("%d",&t);

    while(t--)
    {
        v.clear();

        scanf("%d",&n);
        sum = 0;
        sum2 = 0;
        sum3 = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;

            if(a>=0)sum2+=a;
            else sum3+=-a;

            v.push_back(a);
        }
        if(sum==0)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
            sort(v.begin(),v.end());
            if(sum3>sum2)
            {
                 for(i=0;i<v.size();i++)printf("%d ",v[i]);
            }
            else{
                for(i=v.size()-1;i>=0;i--)printf("%d ",v[i]);
            }



            nn;
        }




    }

    return 0;
}
