#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x=1,y=1,z=1,n;
    int ara[4];
    for(i=1;i<=3;i++)
    {
        ara[i]=0;
    }
    scanf("%d",&n);
    int ara1[n+1];
    int ara2[n+1];
    int ara3[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ara[a]++;
        if(a==1){
            ara1[x]=i;
            x++;
        }
        else if(a==2){
            ara2[y]=i;
            y++;
        }
        else if(a==3){
            ara3[z]=i;
            z++;
        }

    }
    sort(ara+1,ara+4);
    printf("%d\n",ara[1]);
    if(ara[1]>0){
    for(i=1;i<=ara[1];i++){
            printf("%d",ara1[i]);
            printf(" %d",ara2[i]);
            printf(" %d\n",ara3[i]);
    }

    }

return 0;
}
