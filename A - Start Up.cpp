    #include<bits/stdc++.h>
    using namespace std;
     
    string s2 = "AHIMOUTVWXY";
    bool check(char ch)
    {
        int flag = 0;
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==ch)
            {
                flag = 1;
            }
        }
        if(flag==1)return true;
     
        return false;
    }
    int main()
    {
        string s,s3;
        int i,j,flag;
        while(cin>>s)
        {
            flag = 0;
            i = 0;
            j = s.size();
     
            for(i=0;i<j;i++)
            {
                if(!check(s[i]))
                {
                    flag = 1;
                    break;
                }
            }
            s3 = s;
            reverse(s.begin(),s.end());
     
            if(flag==0&&s==s3)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
     
     
     
     
        }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    return 0;
    }
