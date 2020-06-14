#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n,x,sum=0;
	cin>>n;
	REP(i,1,n-1)
	{
		cin>>x;
		sum+=x;
	}
	ll actualSum= n*(n+1)/2;
	cout<<actualSum-sum;
}

