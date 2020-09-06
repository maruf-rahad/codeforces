#include<bits/stdc++.h>
using namespace std;
#define mx 1000010
#define ll long long
char ch[mx];

struct node{

    int open,close,correct;
};
node tree[mx*4];

int tree2[mx*4];

void build(int node,int b,int e)
{
    if(b==e)
    {
        if(ch[b-1]=='(')
            tree[node].open = 1;
        if(ch[b-1]==')')
            tree[node].close = 1;
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid  = (b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    int x = tree[left].open;
    int y = tree[right].close;
    int z = min(x,y);

    tree[node].correct = tree[left].correct+tree[right].correct+z;
    tree[node].open = tree[left].open+tree[right].open-z;
    tree[node].close =  tree[left].close+tree[right].close-z;
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    ll lopen=0LL,lclose=0LL,lcorrect=0LL,ropen=0LL,rclose=0LL,rcorrect=0LL,x=0LL,y=0LL,z=0LL,r3,r4,p;
    if(b>j||e<i)
    {
       // printf("node %lld %lld\n",node,0LL);
        return 0LL;
    }

    if(b>=i&&e<=j)
    {
        x = 1000000+tree[node].correct;
        y = x*1000000+tree[node].open;
        z = y*1000000+tree[node].close;
      //  printf("node %lld %lld\n",node,z);
        return z;
    }

    ll left = node*2;
    ll right = node*2+1;
    ll mid = (b+e)/2;

    ll r1 = query(left,b,mid,i,j);
    r3 = r1;
    //printf("yy node %lld r1 = %lld\n",node,r1);

    lcorrect = (r1/1000000000000)%1000000;
    if(r1>0)
        r1 = r1-1000000000000000000-(lcorrect*1000000000000);
    lopen = (r1/1000000)%1000000;
    if(r1>1000000000000)
        r1  = r1-1000000000000-(lopen*1000000);
    lclose = r1%1000000;


    ll r2 = query(right,mid+1,e,i,j);
    r4 = r2;
    //printf("node %lld r2 = %lld\n",node,r2);
    rcorrect = (r2/1000000000000)%1000000;
    if(r2>0)
        r2 = r2-1000000000000000000-(rcorrect*1000000000000);
    ropen = (r2/1000000)%1000000;
    if(r2>1000000000000)
        r2  = r2-1000000000000-(ropen*1000000);
    rclose = r2%1000000;
        z = min(lopen,rclose);
        p = z;
       x = 1000000+lcorrect+rcorrect+z;
       y = (x*1000000)+lopen+ropen-z;
       z = (y*1000000)+lclose+rclose-z;

    //printf("r1 %lld %lld %lld %lld %lld\n",node,r3,lcorrect,lopen,lclose);
    // printf("r2  %lld %lld %lld %lld %lld\n",node,r4,rcorrect,ropen,rclose);
     //printf("min %lld\n",p);


    return z;
}

int main()
{
    ll n,m,i,j,y;
    ll x,a,b;

    scanf("%s",&ch);

    n = strlen(ch);

    build(1,1,n);

   // for(i=1;i<=30;i++)
 //   {
   //     printf("%d %d %d %d\n",i,tree[i].correct,tree[i].open,tree[i].close);
   // }

   // printf("\n\n");

    scanf("%lld",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%lld %lld",&a,&b);
        x = query(1,1,n,a,b);
        printf("%lld\n",((x/1000000000000)%1000000)*2);
    }







    return 0;
}
