#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2;
    char str;
    char ch[120];
    int n,m,a,b,i,j,x,y,sum,flag,t,r,p,s,mr,ms,mp,c;
 
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            scanf("%d %d %d",&a,&b,&c);
            cin>>s1;
            s = 0;
            p = 0;
            r = 0;
            mr = 0;
            mp = 0;
            ms = 0;
            for(i=0;i<n;i++)
            {
                ch[i] = NULL;
            }
 
            for(i=0; i<s1.size(); i++)
            {
                if(s1[i]=='R')
                    r++;
                else if(s1[i]=='P')
                    p++;
                else if(s1[i]=='S')
                    s++;
            }
            sum = 0;
            // printf("%d %d %d\n",r,p,s);
 
            if(a>=s)
                sum+=s;
            else
            {
                sum += a;
            }
            //   printf("%d\n",sum);
 
            if(b>=r)
                sum+=r;
            else
            {
                sum += b;
            }
            //  printf("%d\n",sum);
 
            if(c>=p)
                sum += p;
            else
                sum += c;
 
            // printf("%d\n",sum);
 
            if(n%2==0)x = n/2;
            else x = n/2+1;
            if(sum>=x)
            {
                printf("YES\n");
                for(i=0; i<n; i++)
                {
                    if(s1[i]=='R'&&b>0)
                    {
                        ch[i] = 'P';
                        b--;
                    }
                }
                for(i=0; i<n; i++)
                {
                    if(s1[i]=='P'&&c>0)
                    {
                        ch[i] = 'S';
                        c--;
                    }
                }
                for(i=0; i<n; i++)
                {
                    if(s1[i]=='S'&&a>0)
                    {
                        ch[i] = 'R';
                        a--;
                    }
                }
                for(i=0;i<n;i++)
                {
                    if(ch[i]==NULL&&a>0){
                        ch[i] = 'R';
                        a--;
                    }
                    else if(ch[i]==NULL&&b>0){
                        ch[i] = 'P';
                        b--;
                    }
                     else if(ch[i]==NULL&&c>0){
                        ch[i] = 'S';
                        c--;
                    }
                }
                for(i=0;i<n;i++)printf("%c",ch[i]);
 
                printf("\n");
 
            }
            else
                printf("NO\n");
 
        }
    }
    return 0;
}