#include<iostream>
using namespace std;
int main()
{
	int n, a=0, b=0;
	scanf("%d", &n);
	char j, y;
	int jc=0, jj=0, jb=0;
	int yc=0, yj=0, yb=0;
	for(int i=0; i<n; i++)
	{
		getchar();
		scanf("%c %c", &j, &y);
		if(j=='C'&&y=='J')
		{
			jc++;
			a++;
		}
		else if(j=='J'&&y=='B')
		{
			jj++;
			a++;
		}
		else if(j=='B'&&y=='C')
		{
			jb++;
			a++;
		}
		else if(y=='C'&&j=='J')
		{
			yc++;
			b++;
		}
		else if(y=='J'&&j=='B')
		{
			yj++;
			b++;
		}
		else if(y=='B'&&j=='C')
		{
			yb++;
			b++;
		}
	}
	printf("%d %d %d\n", a, n-a-b, b);
	printf("%d %d %d\n", b, n-a-b, a);
	if(jb>=jc&&jb>=jj) printf("B");
	else if(jc>=jj&&jc>jb) printf("C");
	else if(jj>jc&&jj>jb) printf("J");
	
	if(yb>=yc&&yb>=yj) printf(" B");
	else if(yc>=yj&&yc>yb) printf(" C");
	else if(yj>yc&&yj>yb) printf(" J");
	return 0;
}
