#include <iostream>

using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;

	int size;
	if(r>=c)
		size=c+1;
	else
		size=r+1;
	cout<<size<<endl;
	for(int x=0;x<size;x++)
	{
		cout<<x<<" "<<size-x-1<<endl;
	}
	return 0;
}