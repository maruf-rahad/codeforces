#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,x,y,n,h,m,p,q;
    x=1200;
    double ca,z,taka,na;
    scanf("%d %d",&h,&m);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    y=h*60+m;
    if(y>=1200){
            if(a%d==0){
                n=a/d;
            }else{
            n=a/d+1;
            }
            ca=c;
            na=n;
            z=ca-((ca*20)/100);
            taka=z*na;
            printf("%0.4lf\n",taka);

    }else{

            if(a%d==0){
            n=a/d;
            }else{
            n=a/d+1;
            }
            ca=c;
            na=n;
            taka=c*na;
            p=a+((x-y)*b);
             if(p%d==0){
            n=p/d;
            }else{
            n=p/d+1;
            }
            ca=c;
            z=ca-((ca*20)/100);
            na=n;
            double taka2=z*n;
            if(taka<=taka2){
                printf("%0.4lf\n",taka);
            }else{
            printf("%0.4lf\n",taka2);
            }

    }

return 0;
}
