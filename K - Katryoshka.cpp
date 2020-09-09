#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull; //"%llu"
typedef long long ll;

int smallest(int x, int y, int z){
    return std::min({x, y, z});
}

int main(){
   freopen("Katryoshka.in","r",stdin);
   ll n,e,m,b;
   scanf("%lld", &n);
   for(int i=0;i<n;i++){
     ll ans=0;
     scanf("%lld %lld %lld", &e,&m,&b);
   ll x =  smallest(e,m,b);
   ans +=x;

   e-=x;
   m-=x;
   b-=x;
   //cerr<<e<<m<<b<<"\n";
   if((e/2) <= b)
     ans+=e/2;
   else
    ans+=b;

     printf("Case %d: %d\n", i+1,ans);
   }
 return 0;
}//main

