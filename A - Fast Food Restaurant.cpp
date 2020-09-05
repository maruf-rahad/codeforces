#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        sum = 0;
        if(a>0)
        {
            sum++;
            a--;
        }
        if(b>0)
        {
            sum++;
            b--;
        }
        if(c>0)
        {
            c--;
            sum++;
        }
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());

        a = v[2];
        b = v[1];
        c = v[0];
        if(a>0&&b>0)
        {
            sum++;
            a--;
            b--;
        }
        if(a>0&&c>0)
        {
            sum++;
            a--;
            c--;
        }

        if(b>0&&c>0)
        {
            sum++;
            b--;
            c--;

        }
        if(a>0&&b>0&&c>0)
        {
            sum++;
        }
        printf("%d\n",sum);
    }












    return 0;
}
