    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mx 1e16
    vector<ll>v;
    vector<ll>v2;
    ll visited[100];

    void make(ll m)
    {
        v.push_back(1LL);
        visited[0] = 0LL;
        for(ll i = 1;;i++)
        {
           v.push_back(v[i-1]*m);
           visited[i] = 0;
           if(v[i]>mx)break;
        }
    }

    int main()
    {
        ll n,m,a,b,i,j,x,y,t,sum;
        scanf("%lld",&t);
        while(t--)
        {
            scanf("%lld %lld",&n,&m);
            v.clear();
            v2.clear();
            for(i=0;i<n;i++)
            {
                scanf("%lld",&a);
                v2.push_back(a);
            }

            make(m);
            sort(v2.begin(),v2.end());



            int flag = 0;
            for(i=v2.size()-1;i>=0;i--)
            {
                sum = 0;
                if(v2[i]==0)continue;
                for(j=v.size()-1;j>=0;j--)
                {
                    if(sum+v[j]<=v2[i]&&visited[j]==0)
                    {
                        visited[j] = 1;
                        sum+=v[j];
                        if(sum==v2[i])break;
                    }
                }
                if(sum!=v2[i]){
                    flag = 1;
                    break;
                }
            }

            if(flag==0)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }


        }
































    return 0;
    }
