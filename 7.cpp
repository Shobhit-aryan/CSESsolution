#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll sq=i*i;
		ll fact=sq*(sq-1)/2;
		if(i>2)
		{
			fact=fact- 4*(i-1)*(i-2);
			}
		cout<<fact<<"\n";
	}
	return 0;
}
