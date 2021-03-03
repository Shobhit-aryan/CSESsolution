#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n;
	cin>>n;
	vector<pair<ll,ll>> v;
	ll start,end;
	while(n--){
		cin>>start>>end;
		v.push_back({end, start});
	}
	sort(v.begin(), v.end());
	ll currEnd = 0;
	ll ans = 0;
	for(auto i : v){
		if(i.second >= currEnd){
			currEnd = i.first;
			ans++;
		}
	}
	cout<<ans;
}
