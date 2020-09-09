#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int  n,a,b,i,j,x,y,t;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        int flag = 0,flag2 = 0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        for(i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                a = i;
                break;
            }
        }
        b = 1;
        for(i=a;i<v.size();i++)
        {
            if(v[i]!=b)
            {
                flag = 1;
            }
            b++;
        }
        if(flag==0)
        {
            for(i=0;i<a;i++)
            {
                if(v[i]!=b)
                {
                    flag = 1;
                }
                b++;
            }
        }

        for(i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                a = i;
                break;
            }
        }
        b = 1;
        for(i=a;i>=0;i--)
        {
            if(v[i]!=b)
            {
                flag2 = 1;
            }
            b++;

        }
        for(i=v.size()-1;i>=a+1;i--)
        {
            if(v[i]!=b)
            {
                flag2 = 1;
            }
            b++;
        }

        if(flag==0||flag2==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }



    }











return 0;
}

