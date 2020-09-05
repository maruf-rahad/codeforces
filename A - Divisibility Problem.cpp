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
        int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
        string s,s2;
        char str;
        scanf("%d",&t);
     
        while(t--)
        {
     
            scanf("%d %d",&a,&b);
             if(a%b==0)printf("%d\n",0);
            else if(a<b)printf("%d\n",b-a);
            else{
                printf("%d\n",(a/b+1)*b-a);
            }
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
