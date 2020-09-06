#include<bits/stdc++.h>
using namespace std;
#define mx 150010
int ara[mx];
int tree[mx*4];

void build(int node,int b,int e,int carry,int x)
{
   // getchar();
    if(b==e)
    {
        tree[node] = ara[b];
        return ;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    build(left,b,mid,carry+1,x);
    build(right,mid+1,e,carry+1,x);

    //printf("%d %d %d %d %d %d %d\n",carry,x,node,left,right,tree[left],tree[right]);

    if(x%2==0)
    {
        if(carry%2==0)
        {
           // printf("node %d\n",node);
            tree[node] = tree[left]|tree[right];
        }
        else
            tree[node] = tree[left]^tree[right];
    }
    else
    {
        if(carry%2==1)
            tree[node] = tree[left] | tree[right];
        else
            tree[node] = tree[left]^tree[right];
    }

}

int query(int node,int b,int e,int i,int j,int carry,int x,int newvalue)
{
    if(b>j||e<i)
    {
        return tree[node];
    }
    if(b>=i&&e<=j)
    {
        tree[node] = newvalue;
        return tree[node];
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    int r1 = query(left,b,mid,i,j,carry+1,x,newvalue);
    int r2 = query(right,mid+1,e,i,j,carry+1,x,newvalue);


    if(x%2==0)
    {
        if(carry%2==0)
        {
            tree[node] = r1|r2;
            return r1|r2;
        }
        else{
                tree[node] = r1^r2;
            return r1^r2;
        }
    }
    else{
        if(carry%2==1)
        {
              tree[node] = r1|r2;
            return r1|r2;
        }
        else{
                tree[node] = r1^r2;
            return r1^r2;
        }

    }
}

int make(int n)
{
    int sum = 1;
    for(int i=1; i<=n; i++)
    {
        sum = sum*2;
    }
    return sum;
}
int main()
{

    int n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&x,&m)==2)
    {
        n = make(x);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        build(1,1,n,1,x);

       for(i=1;i<=m;i++)
       {
           scanf("%d %d",&a,&b);
           y = query(1,1,n,a,a,1,x,b);
           printf("%d\n",y);
       }

    }









    return 0;
}
