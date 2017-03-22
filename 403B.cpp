#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include<algorithm>
using namespace std;
class person
{
public:
	int pos;
	int speed;
};

double function(double mid,vector<person>list)
{
	double maximum = 0;
	for (person x : list)
	{
		maximum = max(abs(x.pos - mid)*1.0 / x.speed, maximum);
	}
	return maximum;
}
int main()
{
	int friends;
	cin >> friends;
	vector<person>list;
	int smallest = 1E9;
	int largest = 0;
	for (int x = 0; x < friends; x++)
	{
		int pos;
		cin >> pos;
		person per;
		per.pos = pos;
		list.push_back(per);
		if (pos < smallest)
			smallest = pos;
		if (pos > largest)
			largest = pos;
	}
	for (int x = 0; x < friends; x++)
	{
		int v;
		cin >> v;
		list[x].speed = v;
	}

	double start = smallest;
	double end = largest;
	double ans = 1E9;
	while (start<=end)
	{
		double mid = (start + end) / 2;
		double maximum = function(mid,list);
		if (maximum < ans) {
			ans = maximum;
		}
		if (function(mid - .000001, list) < function(mid + .000001, list))
		{
			end = mid;
		}
		else
			start = mid;
		if (end - start < .000001)
			break;
	}
	cout << fixed;
	cout <<setprecision(12)<<ans<<endl;
	return 0;
}