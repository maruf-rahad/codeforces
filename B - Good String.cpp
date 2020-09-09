#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag,a,t,b;
    string s;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        cin>>s;
        a = n;
        b = n;
        for(i=0;i<n;i++)
        {
            if(s[i]=='>')
            {
                a = i;
                break;
            }
        }

        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='<')
            {
                b = s.size()-i-1;
                break;
            }
        }

        printf("%d\n",min(a,b));

    }









return 0;
}

