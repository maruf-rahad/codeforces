#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v;
map<int,int>mp;
int ara[100005];
int main()
{
    int n,m,a,b,i,j,x,y,flag,sum,k,t;
    string s,s2;
    char str;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            flag = 0;
        }
        else if(b>a&&(b-a)%2==1)
        {
            flag = 1;
        }
        else if(b>a&&(b-a)%2==0)
        {
            flag = 2;
        }
        else if(b<a&&(a-b)%2==1)
        {
            flag = 2;
        }
        else{
            flag = 1;
        }




        printf("%d\n",flag);



    }








    return 0;
}
