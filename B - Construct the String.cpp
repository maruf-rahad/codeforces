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
    char ch[10000];
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
        int t,n,m,a,b,i,j,y,mx,mn,sum,k=0,x;
        string s;
        scanf("%d",&t);
     
        while(t--)
        {
            scanf("%d %d %d",&n,&a,&b);
            x = 97;
            s.clear();
            for(i=1;i<=b;i++)
            {
                ch[i] = x;
                x++;
            }
            x = b;
            for(i=b+1;i<=a;i++)
            {
                ch[i] = ch[x];
                x--;
                if(x<1)x=  1;
            }
            x = 1;
            for(i=a+1;i<=n;i++)
            {
                ch[i] = ch[x];
                x++;
            }
            for(i=1;i<=n;i++)
            {
                printf("%c",ch[i]);
            }
            printf("\n");
     
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
