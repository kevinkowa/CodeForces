#include<iostream>
#include<algorithm>
#include<cmath>
long long colors[3];
using namespace std;
int main()
{
	long long count=0;
	cin>>colors[0]>>colors[1]>>colors[2];
	long long ans=(colors[0]+colors[1]+colors[2])/3;
	long long s1=max(colors[0],max(colors[1],colors[2]));
	long long two=0;
	if(s1==colors[0])
		two=colors[1]+colors[2];
	else if(s1==colors[1])
		two=colors[0]+colors[2];
	else
		two=colors[0]+colors[1];

	if(ans<=two)
		cout<<ans;
	else
		cout<<two;
	
	return 0;
}