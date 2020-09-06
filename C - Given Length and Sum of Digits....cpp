#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int main()
{
    int n,m,sum,flag,flag2,i,x,j,s;
 
    while(scanf("%d %d",&n,&m)==2)
    {
        v.clear();
        v2.clear();
        flag = 0;
        if(n*9<m)flag = 1;
 
        if(n>1&&m==0)flag = 1;
 
        sum = 0;
 
        if(flag==1)
        {
            printf("%d %d\n",-1,-1);
            continue;
        }
        else if(n==1&&m==0){
            printf("%d %d\n",0,0);
            continue;
        }
        s = n;
        while(n>0)
        {
            x = 9;
             n--;
 
            while(1)
            {
                if(sum+x<=m)
                {
                    sum+=x;
                    v.push_back(x);
                    break;
                }
                else{
                    x--;
                }
            }
 
        }
        sum = 0;
        flag = 0;
        n =s;
        while(n>0)
        {
            n--;
            if(flag==0)
            {
                x = 1;
                while(1)
                {
                    if(n*9>=m-(sum+x))
                    {
                        flag = 1;
                        v2.push_back(x);
                        sum+=x;
                        break;
                    }
                    else x++;
                }
            }
            else{
                x = 0;
                while(1)
                {
                    if(n*9>=m-(sum+x))
                    {
                        v2.push_back(x);
                        sum+=x;
                        break;
                    }
                    else x++;
                }
 
            }
        }
        for(i=0;i<v2.size();i++)printf("%d",v2[i]);
 
        printf(" ");
 
        for(i=0;i<v.size();i++)printf("%d",v[i]);
 
        printf("\n");
    }
	return 0;
}