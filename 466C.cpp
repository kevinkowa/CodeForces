#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int*arr=new int[size];
	long long sum=0;
	for(int x=0;x<size;x++){
		cin>>arr[x];
		sum+=arr[x];
	}
	if(sum%3!=0)
	{
		cout<<"0";
		return 0;
	}
	long long target=sum/3;
	int*arr2=new int[size];
	long long curr=0;
	long long ans=0;
	for(int x=size-1;x>=0;x--)
	{
		curr+=arr[x];
		if(curr==target)
			arr2[x]=1;
		else
			arr2[x]=0;
	}
	for(int x=size-2;x>=0;x--)
	{
		arr2[x]+=arr2[x+1];
	}
	curr=0;
	for(int x=0;x+2<size;x++)
	{
		curr+=arr[x];
		if(curr==target)
			ans+=arr2[x+2];
	}
	cout<<ans;
	return 0;
}