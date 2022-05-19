#include<bits/stdc++.h>
using namespace std;

const int A_MAX=1e7+10;
const int N=1e5+10;

int cnt[A_MAX];

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int temp;
		
		cin>>temp;
		cnt[temp]++;
		
	}

	int q;cin>>q;

	while(q--)
	{
		int x;cin>>x;
		cout<<cnt[x]<<'\n';
	}
		
	return 0;

}
