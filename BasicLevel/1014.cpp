#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int l1 = s1.length(), l2 = s2.length(), l3 = s3.length(), l4 = s4.length();
	int la = l1 > l2 ? l2 : l1;
	int lb = l3 > l4 ? l4 : l3;
	char one, two;
	int c = 0, three, j;
	char a[8][5] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	for(int i=0; i<la; i++)
	{
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'&&c==0)
		{
			one = s1[i];
			c++;
		}
		else if(c==1&&s1[i]==s2[i]&&((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9')))
		{
			two = s1[i];
			break;
		}
	}
	for(int i=0; i<lb; i++)
	{
		if(s3[i]==s4[i]&&((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z')))
		{
			three = i;
			break;
		}
	}
	if(two>='0'&&two<='9') j = two-'0';
	else if(two>='A'&&two<='N') j = two-'A'+10;
	printf("%s %02d:%02d\n", a[one-'A'], j, three);
	return 0;
}
