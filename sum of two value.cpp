#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,x;
	cin>>n>>x;
	vector<pair<ll,ll>> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		v[i].second = i+1;
	}
	sort(v.begin(),v.end());
	int i=0, j=n-1;
	while(i<j){
		if(v[i].first+v[j].first==x){
			cout<<v[i].second<<" "<<v[j].second;
			return 0;
		}
		if(v[i].first + v[j].first<x) i++;
		else j--;
	}
	cout<<"IMPOSSIBLE";
	return 0;
}
