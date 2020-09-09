#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,x,y,a,b,sum,n,one,two;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        one  = 0;
        two = 0;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a%3==0)
            {
                sum++;
            }
            else if(a%3==1)
            {
                one++;
            }
            else if(a%3==2)
            {
                two++;
            }

        }
        int x = min(one,two);
        sum = sum+x;

        one = one-x;
        two =  two-x;


        sum = sum + one/3+(two/3);

        printf("%d\n",sum);


    }


return 0;
}

