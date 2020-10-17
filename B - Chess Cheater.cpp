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

vector<ppp>v;
int main()
{
    int t,n,m,a,b,i,j,x,y,mx,mn,sum,k=0,flag,flag2;
    scanf("%d",&t);
    string s,s2;

    while(t--)
    {
        scanf("%d %d",&n,&m);
        getchar();

        v.clear();
        s = "a";
        cin>>s2;
        s+=s2+"W";
        flag = 0;
        flag2 = 0;
        sum = 0;

        for(i=1;i<=n;i++)
        {
            if(flag==0&&s[i]=='W')
            {
                flag = 1;
                a = i;
               sum++;
            }
            else if(flag==1&&s[i]=='W'){
                v.push_back({i-a-1,{a,i}});
                a = i;
                sum++;
            }
        }

        if(sum==0)
        {
            if(m==0)printf("0\n");
            else printf("%d\n",min(n,m)*2-1);
            continue;
        }

        sort(v.begin(),v.end());

        /*for(i=0;i<v.size();i++)
        {
            printf("%d %d %d\n",v[i].F,v[i].S.F,v[i].S.S);
        }*/
        x = v.size();
        for(i=0;i<x;i++)
        {
            for(j=v[i].S.F+1;j<v[i].S.S;j++)
            {
                if(m>0&&s[j]=='L')
                {
                    s[j] = 'W';
                    m--;
                   // printf("yes\n");

                }
            }
        }

        sum  = 0;
        x = 0;
        int tot = 0;
        for(i=1;i<=n;i++)
        {
            if(s[i]=='W'&&s[i-1]=='W')sum+=2;
            else if(s[i]=='W'&&s[i-1]!='W')sum+=1;
            else x++;
        }

        //cout<<s<<endl;
        //printf("%d %d %d\n",sum,m,x);

        sum+=((min(x,m))*2);

        printf("%d\n",sum);


    }

    return 0;
}
