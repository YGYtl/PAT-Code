#include<stdio.h>
int main()
{
  char c[1000000] = {'\0'};
  gets(c);
  int i, cp=0, ct=0, cpa=0;
  for(i=0; c[i]!='\0'; i++)
  {
    if(c[i]=='P')
    {
      cp++;
    }
    if(c[i]=='A')
    {
      cpa = (cp+cpa)%1000000007;
    }
    if(c[i]=='T')
    {
      ct = (ct + cpa)%1000000007;
    }
  }
  printf("%d", ct);
  return 0;
}