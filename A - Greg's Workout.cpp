#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,sum;
    char ch[3][10] = {"chest","biceps","back"};
    while(scanf("%d",&n)==1)
    {
        vector< int >v(4,0);
        for(i=1;i<=n;i++){

                scanf("%d",&a);
                b=i%3;
                if(b==0){
                v[3] = v[3]+a;
                }
                else{
                    v[b] = v[b]+a;
                }

        }


        a = *max_element(v.begin(),v.end());


        for(i=1;i<4;i++){
            if(v[i]==a)
            {
                printf("%s\n",ch[i-1]);
                break;
            }
        }
    }

return 0;
}



















