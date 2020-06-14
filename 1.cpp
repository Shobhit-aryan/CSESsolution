//@author-----SHOBHIT ARYAN
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	while(true)
		{
			cout<<n<<" ";
			if(n==1) break;
			if(n%2==0) n=n/2;
			else n=n*3+1;
			
		}
		return 0;
}
