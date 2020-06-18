//@author--Shobhit Aryan


#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,ans=0;
	cin>>n;
	for(ll i=5;i<=n ;i*=5)
	{
		ans+=n/i;
	}
	cout<<ans;
	return 0;
}
