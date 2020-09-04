#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,c,d,x,y,flag=0,m;
    cin>>n>>m;
    if(n%2==0){
        a=n/2;
    }else{
    a=n/2+1;
    }
        y=n/2;
        if(m<=a){
            c=(m-1)*2+1;
            cout<<c<<endl;
            flag=1;
        }
        if(flag==0){
            x=m-a;
            c=2*x;
            cout<<c<<endl;
        }



return 0;
}
