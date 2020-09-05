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
    ll ara[100010];
    ll powll(ll n,ll m)
    {
        ll sum = 1;
        for(ll i=1;i<=m;i++)
        {
            sum = sum*n;
        }
        return sum;
    }
     
    int main()
    {
        ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
        scanf("%lld",&t);
     
        while(t--)
        {
            scanf("%lld",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%lld",&ara[i]);
            }
            sum = 0;
            x = 0;
            mx = 0;
            y = 0;
            for(i=2;i<=n;i++)
            {
                if(ara[i]>=ara[i-1])continue;
                else{
                    x = 0;
                    sum = 0;
                    int flag = 0;
                    while(ara[i]<ara[i-1])
                    {
     
                       ll z = abs(ara[i]-ara[i-1]);
                        ll zz = log2(z);
     
                        ara[i]+=powll(2,zz-1);
                        if(flag==0)
                        {
                            flag = 1;
                            x = zz+1;
                        }
     
                    }
                    if(x>mx)
                    {
                        mx = x;
                    }
     
                }
            }
            printf("%lld\n",mx);
     
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
