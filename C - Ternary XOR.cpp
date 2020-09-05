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
        int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,flag1,flag2;
        string s,s1,s2;
        char str;
        scanf("%d",&t);
     
        while(t--)
        {
            scanf("%d",&n);
            cin>>s;
            flag = 0;
            flag1 = 0;
            flag2 = 0;
            s1 = "0";
            s2 = "0";
            for(i=0;i<n;i++)
            {
                if(flag == 1)
                {
                    s1+="0";
                    s2+=s[i];
                }
                else if(s[i]=='2'&&flag==0)
                {
                    s1+="1";
                    s2+="1";
                }
                else if(s[i]=='1'&&flag==0)
                {
                    s1+="1";
                    s2+="0";
                    flag = 1;
                }
                else if(s[i]=='0')
                {
                    s1+="0";
                    s2+="0";
                }
     
            }
            for(i=1;i<=n;i++)
            {
                printf("%c",s1[i]);
            }
            printf("\n");
             for(i=1;i<=n;i++)
            {
                printf("%c",s2[i]);
            }
             printf("\n");
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }


