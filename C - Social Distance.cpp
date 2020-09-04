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
char s[222222];

int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        getchar();
        scanf("%s",&s);

        priority_queue<int>pq;
        x = 0;
        sum  = 0;
        a = 0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                x++;
                a = i+1;
            }
            if(s[i]=='1')
            {
                pq.push(-(i+1));
            }
        }
        sum = 0;
        if(n-a>m&&a!=0&&a!=0)
        {
            pq.push(-n);
            sum++;
        }

        if(a==0)
        {
            sum++;
            pq.push(-n);
        }
     //   printf("%d\n",sum);
        b = -pq.top();
        if(b-1>m)
        {
            sum++;
            pq.push(-1);
        }


        while(!pq.empty())
        {
            a = -pq.top();
            pq.pop();
            if(pq.empty())break;
            b = -pq.top();
            if(b-a>=2*(m+1))
            {
                sum++;
                pq.push(-(a+m+1));
            }
        }

        printf("%d\n",sum);








    }

























return 0;
}
