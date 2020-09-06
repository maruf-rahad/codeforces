#include<bits/stdc++.h>
using namespace std;
vector<int>v[30];
char ch[100005];
char str[100005];
int ara[30];
int ara2[30];
void zero()
{
    for(int i=1;i<=28;i++)v[i].clear();
}
bool check()
{
    for(int i=1;i<=26;i++)
    {
        if(ara[i]==0&&ara2[i]>0)return true;
    }
    return false;
}
int make(int a,int last)
{
    int low,high,mid,flag=0;
     low = 0;
     high = v[a].size()-1;
    // printf("%d %d %d %d\n",a,last,low,high);
    while(low<=high)
    {
        mid = (low+high)/2;
      //  printf("%d %d %d\n",low,high,mid);
        if(v[a][mid]>last)
        {
            high = mid-1;
            flag = 1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag==0)return -1;
    else{
         //   printf("%d %d %d %d\n",a,mid+1,high,v[a][high+1]);
            return v[a][high+1];
    }
}
int main()
{
    int t,n,m,a,b,i,j,s,flag,last,cnt;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        zero();
        memset(ara,0,sizeof(ara));
        memset(ara2,0,sizeof(ara2));
        scanf("%s",&ch);
        scanf("%s",&str);
        s = strlen(ch);
        for(i=0;i<s;i++)
        {
            a = ch[i]-'a'+1;
            ara[a]++;
            v[a].push_back(i);
        }
        s = strlen(str);
        for(i=0;i<s;i++)
        {
            a = str[i]-'a'+1;
            ara2[a]++;
        }
        if(check())
        {
            printf("-1\n");
            continue;
        }
        last= -1;
        cnt = 0;
        for(i=0;i<s;i++)
        {
            a = str[i]-'a'+1;
            b = make(a,last);
       //     printf("b = %d\n",b);
            if(b==-1)
            {
                cnt++;
             //   printf("cnt %d %d %d\n",cnt,a,i);
                last = -1;
                i--;
            }
            else{
                last = b;
            }

        }
        printf("%d\n",cnt+1);


    }















return 0;
}
