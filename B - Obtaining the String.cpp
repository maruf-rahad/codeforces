#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    char ch[100];
    char ch2[100];
    int n,i,j,k,a,b,c,d,z,y;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        int flag2 = 0,sum = 0;

        scanf("%s %s",&ch,&ch2);
        for(i=0;i<n;i++)
        {
            int flag = 0;
            for(j=i;j<n;j++)
            {
                if(ch2[i]==ch[j])
                {
                    a = j;

                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                flag2 = 1;
                break;
            }
            while(i!=a&&a>0)
            {

             swap(ch[a],ch[a-1]);
             a--;
             v.push_back(a+1);
             sum++;

            }

        }
        if(flag2==1)
        {
            printf("-1\n");
        }
        else{

        printf("%d\n",sum);
        for(i=0;i<v.size();i++)
        {
            printf("%d ",v[i]);
        }
        printf("\n");
        }


    }








return 0;
}

