#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, max, min, s;
	string name, x, mx_name, mi_name, mx_x, mi_x;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		cin >> name >> x >> s;
		if(i==0)
		{
			mx_name = name;
			mx_x = x;
			max = s;
			mi_name = name;
			mi_x = x;
			min = s;
		}
		else
		{
			if(s > max)
			{
				mx_name = name;
				mx_x = x;
				max = s;
			}
			else if(s < min)
			{
				mi_name = name;
				mi_x = x;
				min = s;
			}
		}
	}
	cout << mx_name << " " << mx_x << endl;
	cout << mi_name << " " << mi_x << endl;
	return 0;
}
