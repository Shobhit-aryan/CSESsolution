//@author--Shobhit Aryan


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
	set<ll> s;
	ll x;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		s.insert(x);
	}
	cout<<s.size();
	
	return 0;
}
