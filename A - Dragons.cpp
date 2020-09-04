#include<bits/stdc++.h>
using namespace std;
struct drag{
int x;
int y;
};
int cmp(const drag& a,const drag& b){
return a.x<b.x;
}
drag ara[2000];
int main()
{
        int a,b,c,d,i,j,n;
        scanf("%d %d",&a,&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&ara[i].x,&ara[i].y);
        }
        int flag=0;
        sort(ara,ara+n,cmp);
        for(i=0;i<n;i++){
            if(a>ara[i].x){
                a=a+ara[i].y;
            }else{
            flag=1;
            break;
            }
        }
        if(flag==0){
            printf("YES\n");
        }else{
        printf("NO\n");
        }


return 0;
}
