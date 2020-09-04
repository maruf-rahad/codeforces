#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,m,a,b,x,y,t;

    scanf("%d",&t);

    while(t--)
    {
        cin>>s;
        x = 0;
        y = 0;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')x++;
            else y++;
        }

        x = min(x,y);
        if(x%2==1)
        {
            printf("DA\n");
        }
        else{
            printf("NET\n");
        }
    }













return 0;
}
