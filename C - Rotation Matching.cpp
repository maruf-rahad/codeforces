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
int ara[222222];
int ara2[222222];
int ara3[222222];

mapii mp;
mapii mp2;
mapii mp3;
mapii mp4;
mapii :: iterator it;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0;


    while(scanf("%d",&n)==1)
    {
        mp.clear();
        mp2.clear();
        mp3.clear();
        mp4.clear();


        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            mp[a] = i;
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&b);
            mp2[b] = i;
        }

        for(it = mp.begin();it!=mp.end();it++)
        {
            a  = it->F;
            b = it->S;
            x = mp2[a];
            if(x-b>=0)
            {
                mp3[x-b]++;
            }
            else{
                mp3[x-b+n]++;
            }


            if(b-x<0)
            {
                mp4[n+b-x]++;

            }
            else{
                mp4[b-x]++;

            }
        }
        mx = -9;
        for(it = mp3.begin();it!=mp3.end();it++)
        {
            mx = max(mx,it->S);
        }
         for(it = mp4.begin();it!=mp4.end();it++)
        {
            mx = max(mx,it->S);
        }

        printf("%d\n",mx);





    }

























return 0;
}
