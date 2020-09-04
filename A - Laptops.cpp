#include<bits/stdc++.h>
using namespace std;
struct laptop{
    int x;
    int y;

};
int cmp(const laptop& left,const laptop& right){
        return left.x<right.x;
}
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    struct laptop ara[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&ara[i].x,&ara[i].y);
    }
    sort(ara,ara+n,cmp);
    int flag=0;
    for(i=0;i<n-1;i++){
            if(ara[i].x<ara[i+1].x){
                if(ara[i].y>ara[i+1].y){
                    flag=1;
                    break;
                }
            }
    }
    if(flag==1){
        printf("Happy Alex\n");
    }else{
    printf("Poor Alex\n");
    }








return 0;
}
