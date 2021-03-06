#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	ll a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	ll prefix[n+1];
	prefix[0] = 0; 
	for(int i=1;i<=n;i++)
	prefix[i] = a[i]+prefix[i-1];
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<prefix[y] - prefix[x-1]<<endl;
	}
	return 0;
}
