#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,a,b,i,j,x,y;
    string s;

    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        a = 0,b = 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')a++;
            else b++;
        }
        if(a==s.size()||b==s.size()) cout<<s<<endl;
        else{
                ll flag = 0;
            for(i=1;i<=s.size()*2;i++)
            {
                if(flag==0)
                {
                    printf("0");
                    flag = 1;
                }
                else{
                    printf("1");
                    flag=0;
                }

            }
            printf("\n");
        }

    }
















return 0;
}
