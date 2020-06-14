//@author-----SHOBHIT ARYAN
#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll y,x,ans;
		cin>>y>>x;
		if(x>y)
		{
			if(x%2!=0)
			{
				ans=x*x-y+1;
			}
			else
			{
				x--;
				ans=x*x+y;
			}
		}
		else
		{
			if(y%2==0)
			{
			
				ans=y*y-x+1;
			}
			else
			{
				y--;
				ans=y*y+x;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
