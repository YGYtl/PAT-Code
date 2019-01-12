#include<iostream>
using namespace std;
int main()
{
	string s;
	char a[12][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", 
	"qi", "ba", "jiu"};
	int sum = 0, b[1000];
	cin >> s;
	for(int i=0; i<s.length(); i++) sum += s[i]-'0';
	if(sum == 0) printf("ling\n");
	else{
		int j;
		for(j=0; sum; j++)
		{
			b[j] = sum%10;
			sum /= 10;
		}
		for(int i=j-1; i>=0; i--)
		{
			if(i!=j-1) printf(" ");
			printf("%s", a[b[i]]);
		}
	}
	return 0;
}
