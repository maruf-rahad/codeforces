#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int sum,n,m,k,i,j,a,b,x;
 
    while(scanf("%d %d %d",&n,&m,&k)==3)
    {
        v.clear();
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
            v.push_back(a);
        }
       // printf("sum = %d\n",sum);
        sort(v.begin(),v.end());
        if(sum+k-n<m)
        {
            printf("-1\n");
            continue;
        }
        else if(m<=k){
            printf("0\n");
            continue;
        }
 
        sum = 0;
        x = 0;
        i=v.size()-1;
        sum+=(k-1);
 
        while(sum<m)
        {
            x++;
            sum+=v[i];
            if(sum<m)
            {
                sum--;
            }
 
            i--;
        }
		printf("%d\n",x);
    }
return 0;
}