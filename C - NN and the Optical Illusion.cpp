#include<bits/stdc++.h>
using namespace std;
#define pie acos(-1)
#define eps 1e-12

double binarysearch(double R,double x)
{
    double low,mid,high,y;
    low = 0.00000001;
    high = 10000000.0;
    for(int i = 1;i<=1000000;i++)
    {

        mid = (low+high)/2.0;
        y = ((R*R)-(mid*mid)+(2.0*R*mid))/((R+mid)*(R+mid));
       // cout<<mid<<" "<<y<<" "<<cos(x)<<endl;
        if(cos(x)<y)
        {
            low = mid;
        }
        else if(cos(x)>y){
            high = mid;
        }
    }



    return mid;
}


int main()
{
    double R,x,n;
    while(scanf("%lf %lf",&n,&R)==2)
    {

        x = (((360/n)*pie)/180);

        x = binarysearch(R,x);

        std::cout<<std::fixed;

        cout<<setprecision(7)<<x<<endl;



    }










return 0;
}

