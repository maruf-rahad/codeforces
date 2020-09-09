#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    string s;

    while(scanf("%d",&n)==1)
    {
        cin>>s;
        i = 0;
        j = 2;
        while(i<n)
        {
            cout<<s[i];

            i = i +j;

            j++;
        }
        cout<<endl;
    }




return 0;
}

