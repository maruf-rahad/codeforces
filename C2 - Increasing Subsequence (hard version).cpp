#include<bits/stdc++.h>
using namespace std;
int ara[200005];
int main()
{
    int a,b,i,j,x,y,n,sum;

    while(scanf("%d",&n)==1)
    {

        string s = "";
        string s2 = "";
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        i = 1;
        j = n;
        x = -1;
        sum = 0;

        while(i<=j)
        {
           // printf("%d %d %d ",ara[i],ara[j],x);
           if(ara[i]==ara[j]&&x<ara[i])
            {

                x = ara[i];
                s+='L';
                i++;
                sum++;
            }
            else if(ara[i]<ara[j]&&x<ara[i])
            {

                x = ara[i];
                s+='L';
                i++;
                sum++;
            }
            else if(ara[i]>ara[j]&&x<ara[j])
            {

                x = ara[j];
                s+='R';
                j--;
                sum++;
            }
            else if(x<ara[i])
            {

                sum++;
                x = ara[i];
                s+='L';
                i++;
            }
            else if(x<ara[j])
            {


                sum++;
                x = ara[j];
                s+='R';
                j--;
            }
            else
                break;



        }



        i = 1;
        j = n;
        x = -1;
        int sub = 0;


          while(i<=j)
          {
           // printf("%d %d %d ",ara[i],ara[j],x);
           if(ara[i]==ara[j]&&x<ara[i])
            {

                x = ara[i];
                s2+='R';
                j--;
                sub++;
            }
            else if(ara[i]<ara[j]&&x<ara[i])
            {

                x = ara[i];
                s2+='L';
                i++;
                sub++;
            }
            else if(ara[i]>ara[j]&&x<ara[j])
            {

                x = ara[j];
                s2+='R';
                j--;
                sub++;
            }
            else if(x<ara[i])
            {

                sub++;
                x = ara[i];
                s2+='L';
                i++;
            }
            else if(x<ara[j])
            {


                sub++;
                x = ara[j];
                s2+='R';
                j--;
            }
            else
                break;

        }

      if(sub>=sum)
      {
          printf("%d\n",sub);
          cout<<s2<<endl;
      }
      else{
        printf("%d\n",sum);
        cout<<s<<endl;
      }
    }












return 0;
}

