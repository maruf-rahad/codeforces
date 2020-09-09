#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,a,b,i,j,x,y,t,sum,flag;

    scanf("%d",&t);

    while(t--)
    {
        v.clear();
        flag = 0;
        scanf("%d",&n);
        for(i=1;i<=n*4;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        a =0;
        b = v.size()-1;
        x = v[0]*v[b];
        while(a<b)
        {
            sum = v[a]*v[b];
            if(sum!=x||v[a]!=v[a+1]||v[b]!=v[b-1])
            {
                flag = 1;
                break;
            }
            a+=2;
            b-=2;
        }
        if(flag==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }











return 0;
}

