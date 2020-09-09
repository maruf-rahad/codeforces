#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s;

	while(cin>>s)
	{
	long l = s.size();

	long long ara[l+5],flag = 0,sum = 0,i,a,b,x,y;

	for(i=0;i<l;i++)
	{
		if(flag==0&&s[i]=='v')
		{
			flag = 1;
			ara[i] = sum;
		}
		else if(flag==1&&s[i]=='v')
		{
			sum++;
			ara[i] = sum;
		}
		else if(s[i]=='o')
		{
			ara[i] = sum;
			flag = 0;
		}

	}
	long long total = 0;
	long long mx = ara[l-1];
	for(i=0;i<l;i++)
	{
		if(s[i]=='o')
		{
			a = ara[i];
			b = mx-ara[i];
			total=total+(a*b);
		}

	}

	printf("%lld\n",total);
	}








	return 0;
}
