#include<bits/stdc++.h>
using namespace std;
#define mx 300010
int ara[mx];
int visited[mx];
int tree[mx*4];

void  build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = 1;
        return ;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

void query(int node,int b,int e,int i,int j,int w)
{
    if(b>j||e<i||tree[node]<=0)return;

    if(b>=i&&e<=j)
    {

        for(int k=b;k<=e;k++)
        {

            if(visited[k]==0)
            {
                visited[k] = w;
                tree[node]--;
            }
        }

        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    query(left,b,mid,i,j,w);
    query(right,mid+1,e,i,j,w);
    tree[node] = tree[left]+tree[right];




}
int main()
{
    int n,m,a,b,i,j,x,y,w;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<=n+5;i++)visited[i] = 0;
        for(i=0;i<=n*4+5;i++)tree[i] = 0;

        build(1,1,n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&w);
            query(1,1,n,a,w-1,w);
            query(1,1,n,w+1,b,w);
        }

        for(i=1;i<=n;i++)
        {
            printf("%d ",visited[i]);
        }
        printf("\n");




    }










return 0;
}
