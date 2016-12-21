#include<iostream>
#include<algorithm>
using namespace std;

class subject{

public:
	long long day;
	long long early;
	bool operator < (const subject& s1) const {
  		if(s1.day>=day && s1.early>=early)
  			return 2;
  		else if(s1.day>day)
  			return 1;
  		else if(s1.day<=day)
  			return 0;
	}
};
long long min(long long n1,long long n2)
{
	return (n1>n2?n2:n1);
}
int main()
{
	int n;
	cin>>n;
	subject* list=new subject[n];
	for(int x=0;x<n;x++)
	{
		cin>>list[x].day;
		cin>>list[x].early;
	}
	sort(list,list+n);
	long long curr=min(list[0].day,list[0].early);
	for(int x=1;x<n;x++)
	{
		if(list[x].early>=curr)
			curr=list[x].early;
		else
			curr=list[x].day;
	}
	cout<<curr;
	return 0;
}