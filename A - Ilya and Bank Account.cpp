#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,x,y;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }else{
    a=n/10;
    b=n%10;
    b=(n/100)*10+b;
    if(a>b){
        cout<<a<<endl;
    }
    else{

        cout<<b<<endl;
    }
    }






return 0;
}
