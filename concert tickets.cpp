#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,m,curr,ticket;
	multiset<ll,greater<int>> tickets;
	cin>>n>>m;
	while(n--){
		cin>>ticket;
		tickets.insert(ticket);
	}
	while(m--){
		cin>>curr;
		auto it = tickets.lower_bound(curr);
		if(it==tickets.end())
		cout<<-1<<endl;
		else
		{
			cout<<*it<<endl;
			tickets.erase(it);
		}
	}
	return 0;
}
