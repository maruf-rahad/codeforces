#include<bits/stdc++.h>
using namespace std;
vector<int>v[27];
vector<int>v2[27];
vector<int>q1;
vector<int>q2;

void zero()
{
    q1.clear();
    q2.clear();
    for(int i=0;i<=26;i++)
    {
        v[i].clear();
        v2[i].clear();
    }
}
int main()
{
    int n,a,b,i,j,x,y,sum,p,q;
    string s1,s2;
    char str;

    while(scanf("%d",&n)==1)
    {
        getchar();
        zero();
        p = 0;
        q = 0;
        for(i=1;i<=n;i++)
        {
           // printf("yes\n");

           scanf("%c",&str);
           if(str=='?')
           {
               p++;
               q1.push_back(i);
               continue;
           }
          // printf("%c\n",str);
            a = str-'a'+1;

        v[a].push_back(i);
        }
        getchar();
        for(i=1;i<=n;i++)
        {
            scanf("%c",&str);
            if(str=='?')
           {
               q++;
               q2.push_back(i);
               continue;
           }
            a = str-96;
            v2[a].push_back(i);
        }
        for(i=0;i<=26;i++)
        {
            sort(v[i].begin(),v[i].end());
            sort(v2[i].begin(),v2[i].end());
        }

        sum = 0;
        for(i=1;i<=26;i++)
        {
            a = v[i].size();
            b = v2[i].size();
            x = min(a,b);
            sum+=x;
        }

        //printf("sum = %d\n",sum);

        a = n-sum-p;

        //printf("%d %d\n",a,q);

        if(q>=a)
        {
            x = n;
        }
        else{
            x = a-q;
            x = n-x;
        }

        //printf("x = %d\n",x);

         b = n-sum-q;

        //printf("%d %d\n",a,q);

        if(p>=a)
        {
            y = n;
        }
        else{
            y = b-p;
            y = n-y;
        }

        //printf("y = %d\n",y);
         int z = min(x,y);

        printf("%d\n",z);



        for(i=1;i<=26;i++)
        {
            a = v[i].size();
            b = v2[i].size();
            x = min(a,b);
            for(j=0;j<x;j++)
            {
                printf("%d %d\n",v[i][j],v2[i][j]);

                v[i][j] = 0;
                v2[i][j] = 0;
            }
        }
        a = 0;
        for(i=1;i<=26;i++)
        {
          x = v2[i].size();
            for(j=0;j<x;j++)
            {

                if(p>0&&v2[i][j]!=0)
                {

                printf("%d %d\n",q1[a],v2[i][j]);
                v2[i][j] = 0;
                q1[a] = 0;
                a++;
                p--;
                }

            }
        }
        b = 0;
        for(i=1;i<=26;i++)
        {
            x = v[i].size();

            for(j=0;j<x;j++)
            {
                if(q>0&&v[i][j]!=0)
                {

                printf("%d %d\n",v[i][j],q2[b]);
                v[i][j] = 0;
                q2[b] = 0;
                b++;
                q--;

                }

            }
        }

        //printf("%d %d %d %d\n",z,sum,a,b);

         p = q1.size();
         q = q2.size();
         int baki = z-sum-a-b;

        // printf("baki %d\n",baki);

         while(baki>0)
         {
             printf("%d %d\n",q1[p-1],q2[q-1]);
             baki--;
             p--;
             q--;
         }













    }







return 0;
}

