#include<iostream>
using namespace std;
int main()
{
	long long int s1, s2, s3, s4;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> s1 >> s2 >> s3;
		s4 = s1 + s2;
		cout << "Case #" << i << ": ";
		if(s1>0 && s2>0 && s4 <= 0) cout << "true" << endl;
		else if(s1<0 && s2<0 && s4 >= 0) cout << "false" << endl;
		else if(s4 > s3) cout << "true" << endl;
		else cout << "false" << endl;
	}
	return 0;
}