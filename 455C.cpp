//solved
#include<iostream>
using namespace std;
int list[100001];
long long max(long long n1,long long n2)
{
	return (n1>n2?n1:n2);
}
int main()
{
	for(int x=0;x<100001;x++)
		list[x]=0;
	int n;
	cin>>n;
	while(n-->0)
	{
		long long val;
		cin>>val;
		list[val]++;
	}
	long long dp[100001];
	dp[0]=0;
	dp[1]=list[1];
	for(int x=2;x<100001;x++)
	{
		dp[x]=max(dp[x-1],static_cast<long long>(list[x])*x+dp[x-2]);
	}
	cout<<dp[100000];
	return 0;
}