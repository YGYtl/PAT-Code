#include<stdio.h>
#include<string.h>
int main()
{
  char m[100], c[1000][1000], ch[10]={'#'};
  int n, i, count = 1, k=0;
  scanf("%s %d", m, &n);
  getchar();
  i=0;
  while(1)
  {
    gets(c[i]);
    if(strcmp(c[i],ch)==0) break;
    if(i<n&&strcmp(c[i],m)==0)
    {
      printf("Welcome in");
      break;
    }
    else if(i<=n&&strcmp(c[i],m)!=0)
    {
      printf("Wrong password: %s\n", c[i]);
      if(i==n-1)
      {
        printf("Account locked");
        break;
      }
    }
    i++;
  }
  return 0;
}