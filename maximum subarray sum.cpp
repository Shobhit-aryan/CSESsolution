#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)cin>>a[i];
	
	ll curSum = a[0];
	ll maxSum = a[0];
	for(ll i=1;i<n;i++){
		curSum = max(curSum+a[i], a[i]);
		maxSum = max(maxSum, curSum);
	}
	cout<<maxSum;
}
