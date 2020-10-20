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
int ara[333333];
char ch[222][222];
vector<int>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,sum2,sum3;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }

        flag = 0;
        sum = 0;
        int flag2 = 0;

        if(ch[1][2]=='0'&&ch[2][1]=='0')
        {
            if(ch[n][n-1]=='0')
            {
               sum++;
            }

            if(ch[n-1][n]=='0')
            {
                sum+=2;
            }

            if(sum==1)
            {
                printf("%d\n%d %d\n",1,n,n-1);
            }
            else if(sum==2)
            {
                 printf("%d\n%d %d\n",1,n-1,n);
            }
            else if(sum==3){
                printf("%d\n%d %d\n%d %d\n",2,n,n-1,n-1,n);
            }
            else printf("0\n");
        }

        else if(ch[1][2]=='1'&&ch[2][1]=='1')
        {
            if(ch[n][n-1]=='1')
            {
                sum++;
            }

            if(ch[n-1][n]=='1')
            {
                sum+=2;
            }

            if(sum==1)
            {
                printf("%d\n%d %d\n",1,n,n-1);
            }
            else if(sum==2)
            {
                 printf("%d\n%d %d\n",1,n-1,n);
            }
            else if(sum==3){
                printf("%d\n%d %d\n%d %d\n",2,n,n-1,n-1,n);
            }
            else printf("0\n");
        }
        else if(ch[n][n-1]=='0'&&ch[n-1][n]=='0')
        {
            if(ch[1][2]=='0')
            {
               sum++;
            }

            if(ch[2][1]=='0')
            {
                sum+=2;
            }

            if(sum==1)
            {
                printf("%d\n%d %d\n",1,1,2);
            }
            else if(sum==2)
            {
                 printf("%d\n%d %d\n",1,2,1);
            }
            else if(sum==3){
                printf("%d\n%d %d\n%d %d\n",2,1,2,2,1);
            }
            else printf("0\n");

        }

        else if(ch[n][n-1]=='1'&&ch[n-1][n]=='1')
        {
            if(ch[1][2]=='1')
            {
                sum++;
            }

            if(ch[2][1]=='1')
            {
                sum+=2;
            }

            if(sum==1)
            {
                printf("%d\n%d %d\n",1,1,2);
            }
            else if(sum==2)
            {
                 printf("%d\n%d %d\n",1,2,1);
            }
            else if(sum==3){
                printf("%d\n%d %d\n%d %d\n",2,1,2,2,1);
            }
            else printf("0\n");
        }
        else
        {
            printf("%d\n",2);
            if(ch[1][2]=='1')printf("1 2\n");
            else if(ch[2][1]=='1')printf("2 1\n");

            if(ch[n][n-1]=='0')printf("%d %d\n",n,n-1);
            else if(ch[n-1][n]=='0') printf("%d %d\n",n-1,n);
        }






    }

    return 0;
}
