#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int sum = 0;
	sum = a + b;
	if(sum<0)
	{
		cout << '-';
		sum = -sum;
	}
	stack<char> stack;
	if(sum==0) stack.push('0');
	int c = 0;
	while(sum!=0)
	{
		int d = sum%10;
		sum = sum/10;
		if(c!=0&&c%3==0)
		{
			stack.push(',');
			c = 0;
		}
		stack.push(d+48);
		c++;
	}
	for(char d=stack.top(); !stack.empty(); c++)
	{
		cout << d;
		stack.pop();
		if(!stack.empty()) d = stack.top();
	}
	return 0;
}