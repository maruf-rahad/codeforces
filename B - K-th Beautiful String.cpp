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
    int powi(int x,int y)
    {
        int sum = 1;
        for(int i=1;i<=y;i++)
        {
            sum = sum*x;
        }
        return sum;
    }
    int main()
    {
        //FasterIO;
        ll t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,s,z;
        string s2;
        char ch[100010];
     
        scanf("%lld",&t);
     
        while(t--)
        {
            scanf("%lld %lld",&n,&s);
            x = (-1+ sqrt(1+(8*s)))/2;
     
            if((x*(x+1))/2==s)
            {
                y = (x*(x+1))/2;
                y = x;
                z=x+1;
     
            }
            else{
               z =x+2;
                x++;
               y = (x*(x+1))/2;
               y = s-y;
     
               y = z-1+y;
     
            }
            sum = 0;
     
            while(n>z)
            {
                printf("a");
                n--;
            }
            printf("b");
            n--;
            while(n>y)
            {
                printf("a");
                n--;
            }
            printf("b");
            n--;
            while(n>=1)
            {
                n--;
                printf("a");
            }
            printf("\n");
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
