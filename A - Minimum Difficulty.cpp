#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i,j;
    vector< int >v1,v2,v3;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&a);
        v1.push_back(a);
    v2.push_back(a);
    }
    for(i=1;i<n-1;i++){

    v1.erase(v1.begin()+i);
    a=0;

    for(j=0;j<v1.size()-1;j++){
            b=v1[j+1]-v1[j];
    if(b>a){
        a=b;
    }
    }
    v3.push_back(a);
    v1.clear();
    for(j=0;j<v2.size();j++){
        v1.push_back(v2[j]);
    }

    }
        a=99999999;
    for(i=0;i<v3.size();i++){
    if(v3[i]<a){
        a=v3[i];
    }
    }
    printf("%d\n",a);




return 0;
}

