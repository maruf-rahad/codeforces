#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    int n,x,y,z,flag;
    s.insert(1);
    s.insert(14);
    s.insert(144);
 
    while(scanf("%d",&n)==1)
    {
        flag = 0;
 
        while(n!=0)
        {
            x = n%10;
            if(s.find(x)!=s.end())
            {
                n = n/10;
                continue;
            }
            n=n/10;
 
            y = (n%10)*10+x;
            if(s.find(y)!=s.end())
            {
                n = n/10;
                continue;
            }
            n=n/10;
 
            z = (n%10)*100+y;
            if(s.find(z)!=s.end())
            {
                n=n/10;
                continue;
            }
 
            flag = 1;
            printf("NO\n");
            break;
        }
 
        if(flag==0)
        {
            printf("YES\n");
        }
 
    }
    return 0;
}