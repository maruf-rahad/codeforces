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
    #define ll long long
     
    vector<ll>v;
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
     
    int main()
    {
        ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
        scanf("%lld",&t);
     
        while(t--)
        {
            v.clear();
     
            scanf("%lld %lld",&n,&m);
            for(i=1;i<=n;i++)
            {
                scanf("%lld",&a);
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            sum = 0;
            x = 0;
            y = 1;
            ll tot = 0;
            for(i=v.size()-1;i>=0;i--)
            {
                tot = tot+v[i];
                sum = tot/y;
     
                if(sum>=m)
                {
                    x++;
                }
                y++;
            }
     
            printf("%lld\n",x);
     
     
     
        }
     
     
     
     
     
     
     
     
    return 0;
    }
