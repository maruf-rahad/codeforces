#include<bits/stdc++.h>
using namespace std;
 vector<int>v;
int main()
{
    int t,n,a,i,b,j,flag;
    scanf("%d",&t);

        while(t--)
        {
            v.clear();
            scanf("%d",&n);
            while(n--)
            {
                scanf("%d",&a);
                v.push_back(a);
            }
            sort(v.begin(),v.end());
            flag = 0;
           for(i=1;i<v.size();i++)
           {
               if(v[i]-v[i-1]<=1)
               {
                   flag = 1;
               }
           }
           if(flag==0)
           {
               printf("1\n");
           }
           else printf("2\n");
        }











return 0;
}
