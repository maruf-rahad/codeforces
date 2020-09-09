#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,i,j,sum,total;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)==4)
    {
        double s = (ceil(b/c))*a;
        sum = ceil(s/d);
        printf("%d\n",int(sum));
    }





return 0;
}

