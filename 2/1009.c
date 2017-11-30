#include <stdio.h>
int main()
{
  char a[81], b[81];
  scanf("%c", &a[0]);
  int i, k, j, c, w;
  i = 0;
  k = 0;
  j = 0;
  while(a[i]!='\n')
  {
    i++;
    scanf("%c", &a[i]);
  }
  for(j=i-1; j>=0; j--)
  {
    if(a[j]==' '||j==0)
    {
      w = j + 1;
      if(j==0)
      {
        w = j;
      }
      while(a[w]!=' '&&a[w]!='\n')
      {
        b[k] = a[w];
        w++;
        k++;
      }
      b[k] = ' ';
      k++;
    }
  }
  if(k>0)
  {
  	b[k-1] = '\0';
  }
  printf("%s", b);
  return 0;
}