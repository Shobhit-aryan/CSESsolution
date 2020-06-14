//@author-----SHOBHIT ARYAN
#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	ll x,count=0,a=1;
	REP(i,1,n)
	{
		cin>>x;
		a=max(a,x);
		count+=a-x;
			
	}
	
	cout<<count;
	return 0;
	
}
