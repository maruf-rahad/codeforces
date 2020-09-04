#include<bits\stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long a,b,i,s,n,m,sum=0;
    scanf("%lld %lld",&n,&m);
    s=1;
    vector<int>v;
    for(i=1;i<=m;i++){
        cin>>a;
        v.push_back(a);
    }

    sum=v[0]-s;
    for(i=1;i<m;i++){
        if(v[i]-v[i-1]<0){
            sum=sum+v[i]-v[i-1]+n;
        }
        else{
            sum=sum+v[i]-v[i-1];
        }
    }
    printf("%lld\n",sum);
return 0;
}
