#include<bits/stdc++.h>
using namespace std;
int ara[10];
int main()
{
    string s;
    int n,m,l,a,b,i,j;

    while(cin>>n)
    {
        cin>>s;
        memset(ara,0,sizeof(ara));
        int l = s.size();
        for(i=0;i<l;i++)
        {

            if(s[i]=='L'){
                for(j=0;j<=9;j++)
                {
                    if(ara[j]==0)
                    {
                        ara[j] = 1;
                        break;
                    }
                }
            }
            else if(s[i]=='R')
            {
                for(j=9;j>=0;j--)
                {
                    if(ara[j]==0)
                    {
                        ara[j] = 1;
                        break;
                    }
                }
            }
            else{
                a = s[i]-'0';
                ara[a] = 0;
            }
        }

        for(i=0;i<=9;i++)
        {
            printf("%d",ara[i]);
        }
        printf("\n");
    }










return 0;
}

