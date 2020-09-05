    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
        ll t,n,m,a,b,i,j,x,y;
     
        scanf("%lld",&t);
        while(t--)
        {
            scanf("%lld %lld",&n,&m);
     
            if(n%2!=m%2)
            {
                printf("NO\n");
            }
            else if(m*m<=n)
            {
                printf("YES\n");
            }
            else printf("NO\n");
        }
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
