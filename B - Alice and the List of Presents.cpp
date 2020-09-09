#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull MOD  = 1e9+7;
ull bigmod(ull n,ull m)
{
    if(m==0)return 1;
    else if(m==1)return n;
    else if(m%2==0)
    {
       ull x = bigmod(n,m/2);
        return ((x%MOD)*(x%MOD))%MOD;
    }
    else{

        return ((n%MOD)*(bigmod(n,m-1%MOD)))%MOD;
    }
}

int main()
{
    ull n,m,a,b,i,j,x,y,sum;

    while(cin>>n>>m)
    {

        sum = bigmod(2,m);
        sum--;
        sum = bigmod(sum,n);

        cout<<sum<<endl;









    }












return 0;
}

