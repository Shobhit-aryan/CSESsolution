//@author--Shobhit Aryan


#include<bits/stdc++.h>
#define ll long long
#define REP(i,a,b) for (int i = a; i <= b; i++)
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,mul=1;
	cin>>n;
	REP(i,1,n){
		mul = 2*mul%((int)1e9+7);
	}
	cout<<mul;
	return 0;
}
