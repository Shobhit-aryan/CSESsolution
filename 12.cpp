#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	map<char,int> m;
	for(int i=0;i<n;i++)
	{
		m[s[i]]++;
	}
	
	int oddCount=0;
	char oddChar;
	for(auto i:m)
	{
		if(i.second%2!=0)
		{
			oddCount++;
			oddChar=i.first;
		}
	}
	if(oddCount>1 || (oddCount==1 && s.size()%2==0))
	cout<<"NO SOLUTION";
	else
	{
		string first="";
		string second="";
		for(auto i:m)
		{
			string s(i.second/2,i.first);
			
			first=first+s;
			second=s+second;
		}
		if(oddCount==1)
		cout<<first+oddChar+second;
		else
		cout<<first+second;
	}
	
}
