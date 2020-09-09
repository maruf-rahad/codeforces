#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> >v;
int main()
{
    int a,b,i,j,x,y,n,flag;
    while(scanf("%d",&n)==1)
    {
        flag  = 0;
        v.clear();
        x = 0;
        y = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&a,&b);
            x+=a;
            y+=b;

            v.push_back(make_pair(a,b));
        }
        if(x%2==0&&y%2==0)
        {
            printf("0\n");
            flag = 1;
        }
        else if(n==1)
        {
            printf("-1\n");
            flag = 1;
        }
        else
        {
            for(i=0; i<v.size(); i++)
            {
                x = x-v[i].first;
                y = y-v[i].second;

                x = x+v[i].second;
                y = y+v[i].first;
                if(x%2==0&&y%2==0)
                {

                    printf("1\n");
                    flag = 1;
                    break;
                }

                x = x-v[i].second+v[i].first;
                y = y-v[i].first+v[i].second;
            }

        }
        if(flag == 0)
            printf("-1\n");

    }





    return 0;
}

