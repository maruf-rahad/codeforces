#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int ara[200050];
int main()
{
    int n,i,sum,x,mx,a;

    while(scanf("%d",&n)==1)
    {
        v.clear();

        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        ara[n+1] = -5;
        sum = 1;


        for(i=2; i<=n+1; i++)
        {
            if(ara[i]-ara[i-1]>0)
            {
                sum++;
            }
            else
            {
                v.push_back(sum);
                sum = 1;

            }
        }
        x = 0;
        int sz = v.size()-1;
       /* for(i=0; i<=sz; i++)
        {
            printf("%d ",v[i]);
        }
        printf("\n\n");*/
        mx = *max_element(v.begin(),v.end());
       // printf("%d\n",mx);

        for(i=2; i<=n; i++)
        {
            if(ara[i]-ara[i-1]<=0)
            {
             //   printf("%d %d\n",i,i-2);
                if(i+1<=n&&ara[i+1]-ara[i-1]>0)
                {
                    if(x+1<=sz)
                    {
                        a = v[x]+v[x+1]-1;
                    //    printf("%d %d %d  %d %d\n",a,v[x],v[x+1]);
                        mx = max(mx,a);

                    }
                }

                if(i-2>=1&&ara[i]-ara[i-2]>0)
                {
                    if(x+1<=sz)
                     {
                        a = v[x]+v[x+1]-1;
                        mx = max(mx,a);
                     }
                }

                x++;


            }
        }

        printf("%d\n",mx);








    }















    return 0;
}

