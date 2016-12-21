//solved
#include<iostream>
using namespace std;
int main()
{
	int zeros,ones;
	cin>>zeros>>ones;
	int divones=ones/3;
	int divzeros=zeros/2;
	//2x-y=0;
	if(zeros*2-ones<-2 || zeros-1>ones)
	{
		cout<<-1;
		return 0;
	}

	string ans="";
	if(zeros>ones)
	{
		ans+="0";
		zeros--;
	}
	while(ones>zeros && ones>0 && zeros>0)
	{
		ans+="110";
		ones-=2;
		zeros-=1;
	}
	while(ones==zeros&&ones>0)
	{
		ans+="10";
		ones--;
		zeros--;
	}
	while(ones>0)
	{
		ans+="1";
		ones--;
	}
	while(zeros>0)
	{
		ans+="0";
		zeros--;
	}
	cout<<ans;
	return 0;
}