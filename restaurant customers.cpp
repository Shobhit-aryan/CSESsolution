#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ari,dep;
	cin>>n;
	vector<pair<int,bool>> v;
	while(n--){
		cin>>ari>>dep;
		v.push_back({ari,true});
		v.push_back({dep,false});
	}
	sort(v.begin(),v.end());
	int curCount = 0, maxCount = 0;
	for(int i=0;i<v.size();i++){
		curCount += v[i].second?1:-1;
		maxCount = max(maxCount, curCount);	
	}
	cout<<maxCount;
	return 0;
}

