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
    mapii :: iterator it;
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
        int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
        scanf("%d",&t);
        mapii mp;
        while(t--)
        {
            mp.clear();
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a);
                mp[a]++;
            }
            mx =-1;
            for(it = mp.begin();it!=mp.end();it++)
            {
                if(it->second>mx)mx = it->second;
            }
            x = mp.size()-1;
            if(x>=mx)
            {
                y = mx;
            }
            else{
                if(mx-1==x)y = x;
                else y = x+1;
            }
            if(y<0)y = 0;
     
            printf("%d\n",y);
     
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
