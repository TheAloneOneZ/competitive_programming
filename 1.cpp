#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	long long fact=1;
	const int M = 100;

	for(int i=2;i<=n;i++)
		fact= (fact*i)%M;

	cout<<fact<<'\n';

	return 0;
}
