#include<stdio.h>
int main()
{
  int n, i;
  scanf("%d", &n);
  getchar();
  char a, b;
  int j1=0, y1=0, jb=0, jc=0, jj=0, yb=0, yc=0, yj=0;
  for(i=0; i<n; i++)
  {
  	scanf("%c %c", &a, &b);
  	getchar();
  	if(a=='C'&&b=='J')
  	{
  		jc++;
	}
	else if(a=='J'&&b=='B')
	{
		jj++;
	}
	else if(a=='B'&&b=='C')
	{
		jb++;
	}
	else if(a=='J'&&b=='C')
	{
		yc++;
	}
	else if(a=='B'&&b=='J')
	{
		yj++;
	}
	else if(a=='C'&&b=='B')
	{
		yb++;
	}
  }
  j1 = jb+jc+jj;
  y1 = yb+yc+yj;
  
  printf("%d %d %d\n", j1, n-j1-y1, y1);
  printf("%d %d %d\n", y1, n-j1-y1, j1);
  
  if(jb>=jc&&jb>=jj) printf("B ");
  else if(jc>jb&&jc>=jj) printf("C ");
  else if(jj>jb&&jj>jc) printf("J ");
  
  if(yb>=yc&&yb>=yj) printf("B");
  else if(yc>yj&&yc>=yj) printf("C");
  else if(yj>yc&&yj>yb) printf("J");
    return 0;
}
