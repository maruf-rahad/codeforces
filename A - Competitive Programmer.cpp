#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,t,n,m,i,j;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        int sum = 0,flag = 0,flag2 = 0;
        int l = s.size();
        for(i=0;i<l;i++)
        {
            if(flag==0&&s[i]=='0')
            {
                flag = 1;
            }
            else if((flag==1&&s[i]=='0')||((s[i]-'0')%2==0))flag2 = 1;

            sum+=s[i]-'0';
        }

        if(flag==1&&sum%3==0&&flag2==1)printf("red\n");
        else printf("cyan\n");
    }







return 0;
}
