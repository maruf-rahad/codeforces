#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    string s;

    int n,m,a,b,i,j,x,y,flag,sum,t;

    int ara[27];
    scanf("%d",&t);
    while(t--)
    {

        cin>>s;
        memset(ara,0,sizeof(ara));
        for(i=0;i<s.size();i++)
        {

            if(s[i]!=s[i+1])
            {

                a = s[i]-'a'+1;
                ara[a] = 1;
            }
            else if(s[i]==s[i+1])
            {
                i++;
            }
        }
        for(i=1;i<=26;i++)
        {
           // printf("%d %d\n",i,ara[i]);
            if(ara[i]!=0)
            {
                printf("%c",i+'a'-1);
            }
        }
        printf("\n");
    }











return 0;
}

