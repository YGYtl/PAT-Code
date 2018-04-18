#include<iostream>
using namespace std;
int main()
{
	int n, o, t, sum;
	cin >> n;
	cin >> o;
	sum = o*6 + 5;
	for(int i=1; i<n; i++)
	{
		cin >> t;
		if(t > o)
		{
			sum += 6*(t-o) + 5;
		}
		else{
			sum += 4*(o-t) + 5;
		}
		o = t;
	}
	cout << sum<<endl;
	return 0; 
}