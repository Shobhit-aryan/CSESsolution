#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	int i=0;
	int j=n-1;
	while(i<=j){
		if(a[i]+a[j]>x){
			j--;
		}else{
			i++;
			j--;
		}
		ans+=1;
	}
	cout<<ans;
}
