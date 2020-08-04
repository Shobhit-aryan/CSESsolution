//@author--Shobhit Aryan


#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,k;
	cin>>n>>m>>k;
	
	ll appli[n];
	ll apar[m];
	
	for(ll i=0;i<n;i++)
	cin>>appli[i];
	for(ll i=0;i<m;i++)
	cin>>apar[i];
	
	sort(appli,appli+n);
	sort(apar,apar+m);
	
	ll c1=0,c2=0,ans=0;
	while(c1<n&&c2<m)
	{
		if(apar[c2]<=appli[c1]+k && apar[c2]>=appli[c1]-k)
		{
			ans++;
			c1++;
			c2++;
		}
		else if(apar[c2]< appli[c1]-k)
		{
			c2++;
		}
		else
		c1++;
	}
	cout<<ans;
	return 0;
}
