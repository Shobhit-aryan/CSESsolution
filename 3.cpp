//@author-----SHOBHIT ARYAN
#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	int ans=1,c=0;
	char a='A';
	for(char d:s)
	{
		if(a==d)
		{
			c++;
			ans= max(c,ans);
		}
		else
		{
			a=d;
			c=1;
		}
	}
	cout<<ans;
	return 0;
}
