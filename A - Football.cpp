#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,b,i,j,l,sum,sub;
    while(cin>>s){
        a=s.size();
        sum=0,sub=0;
        int flag=0;
        for(i=0;i<a;i++){
            if(s[i]=='0'){
                sum++;
                sub=0;
                if(sum==7){
                    flag=1;
                    break;
                }
            }
            else{
                sub++;
                sum=0;
                if(sub==7){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

return 0;
}

