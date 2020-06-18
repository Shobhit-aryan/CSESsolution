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
	ll sum=n*(n+1)/2;
	if(sum%2!=0)
	{
		cout<<"NO";
		return 0;
	}
	else
	{
		cout<<"YES"<<"\n";
		vector<int> v1,v2;
		sum=sum/2;
		while(n)
		{
			if(sum-n>=0)
			{
				v1.push_back(n);
				sum=sum-n;
			}
			else
			{
				v2.push_back(n);
			}
			n--;
		}
		cout<<v1.size()<<"\n";
		for(auto i:v1)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
		cout<<v2.size()<<"\n";
		for(auto i:v2)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
