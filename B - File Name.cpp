#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,b,i,j,l,sum;
    while(cin>>a){
        cin>>s;
        int l = s.size();
        sum = 0;
        b = 0;

        for(i=0;i<l;i++)
        {
            if(s[i]=='x'){
                sum++;
                if(sum>=3){
                    b++;
                }
            }
            else{
                sum=0;
            }

        }
        printf("%d\n",b);
    }

return 0;
}

