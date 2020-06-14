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
	if(n==2 || n==3)
	cout<<"NO SOLUTION";
	else
	{
		REP(i,1,n)
		{
			if(i%2==0)
			cout<<i<<" ";
		}
		REP(i,1,n)
		{
			if(i%2!=0)
			cout<<i<<" ";
		}
		
	}
	return 0;
}
