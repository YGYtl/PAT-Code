#include<stdio.h>
int main()
{
  char c[100000]={'\0'};
  gets(c);
  int i, n=0, c1=0, c0=0;
  for(i=0; c[i]!='\0'; i++)
  {
    if(c[i]>='A'&&c[i]<='Z')
    {
      n += c[i]-'A' + 1;
    }
    if(c[i]>='a'&&c[i]<='z')
    {
      n += c[i]-'a' + 1;
    }
  }
  while(n!=0)
  {
    if(n%2==0)
    {
      c0++;
    }
    if(n%2==1)
    {
      c1++;
    }
    n = n / 2;
  }
  printf("%d %d", c0, c1);
  return 0;
}