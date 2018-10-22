#include<iostream>
using namespace std;
int main()
{
	int n, c;
	char ch;
	scanf("%d %c", &n, &ch);
	for(int i=0; i<n; i++) printf("%c", ch);
	printf("\n");
	if(n%2==0) c = n/2-2;
	else c = (n+1)/2-2;
	while(c--)
	{
		for(int i=0; i<n; i++)
		{
			if(i==0||i==n-1) printf("%c", ch);
			else printf(" ");
		}
		printf("\n");
	}
	for(int i=0; i<n; i++) printf("%c", ch);
	printf("\n");
	return 0;
}
