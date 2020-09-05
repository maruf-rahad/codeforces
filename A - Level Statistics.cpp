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
     
    int main()
    {
        int ara[200],ara2[200];
        int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag;
        scanf("%d",&t);
     
        while(t--)
        {
            scanf("%d",&n);
            flag = 0;
            scanf("%d %d",&ara[1],&ara2[1]);
            if(ara[1]<ara2[1])flag = 1;
     
            for(i=2;i<=n;i++)
            {
                scanf("%d %d",&ara[i],&ara2[i]);
                if(ara[i]<ara[i-1]||ara2[i]<ara2[i-1]||ara[i]<ara2[i]||(ara[i]-ara[i-1]<ara2[i]-ara2[i-1]))flag = 1;
            }
            if(flag==1)
            {
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
     
     
     
     
        }
     
     
     
     
     
     
     
     
    return 0;
    }
