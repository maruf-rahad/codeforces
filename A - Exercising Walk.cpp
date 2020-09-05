    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
        ll x1,x2,y1,y2,x,y,n,m,a,b,i,j,t,left,right,down,up,temp,flag;
     
        scanf("%lld",&t);
        while(t--)
        {
            flag = 0;
            scanf("%lld %lld %lld %lld",&left,&right,&down,&up);
            scanf("%lld %lld %lld %lld %lld %lld",&x,&y,&x1,&y1,&x2,&y2);
     
            temp = left-right;
            if(x1==x2&&(left!=0||right!=0))
            {
                printf("No\n");
                continue;
            }
           // printf("temp %lld\n",temp);
            if(temp>=0)
            {
                if(x-x1<temp)flag = 1;
            }
            else{
                if(x2-x<abs(temp))flag = 1;
            }
            temp = down-up;
            if(y1==y2&&(up!=0||down!=0))
            {
                printf("No\n");
                continue;
            }
     
            if(temp>=0)
            {
                if(y-y1<temp)flag = 1;
            }
            else{
                if(y2-y<abs(temp))flag = 1;
            }
     
            if(flag==1)
            {
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
     
        }
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
