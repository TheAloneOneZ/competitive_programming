#include<bits/stdc++.h>
using namespace std;

const int AMAX=1e9+10;
const int N=1e3+10;
long long int presum[N][N];

int main()
{

	int n;cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int temp;
			cin>>temp;
			presum[i][j]=presum[i][j-1]+presum[i-1][j]-presum[i-1][j-1]+temp;
		}
	}

	int q;
	cin>>q;
	while(q--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<< presum[c][d]-presum[c][b-1]-presum[a-1][d]+presum[a-1][b-1]<<'\n';
	}



	return 0;
}

