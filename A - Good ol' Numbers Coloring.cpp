#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s1,s2;
    char ch,str;
    int n,m,a,b,i,j,x,y,sum,flag,t;
 
    while(scanf("%d",&t)==1)
    {
 
        while(t--)
        {
            scanf("%d %d",&a,&b);
            if(__gcd(a,b)==1){
                printf("Finite\n");
            }
            else{
                printf("Infinite\n");
            }
        }
    }
    return 0;
}