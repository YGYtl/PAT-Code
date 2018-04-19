#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n, c = 0, sum = 0, i=0;
	char a[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	char b[1004]={'\0'};
	char cc[1004]={'\0'};
	gets(b);
	int l = strlen(b);
	for(int i=0; i<l; i++)
		sum += b[i]-'0';
	if(sum==0)
	{
		cc[0] = '0';
		c = 1;
	}
	while(sum!=0)
	{
		cc[c++] = sum%10 + 48;
		sum /= 10;
	}
	while(c > 0)
	{
		if(c!=strlen(cc)) cout << ' ';
		cout << a[cc[--c]-'0'];
	}
	return 0;
}