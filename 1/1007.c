#include <stdio.h>
#include <math.h>
int su(int n);
int main()
{
  int n, a;
  scanf("%d", &n);
  a = su(n);
  printf("%d", a);
  return 0;
}

int su(int n)
{
  int count, j, k, one, i;
  count = 0;
  one = 2;
  if(n<=4)
  {
  	  return 0;
  }
  for(i=3; i<=n; i+=2)
  {
    k = 0;
    for(j=2; j<=sqrt(i); j++)
    {
        if(i%j==0)
        {
            k=1;
            break;
        }
    }
    if(k!=1||i==3)
    {
    	if(i-one==2)
    	{
    		count++;
		}
    	one = i;
	}
  }
  return count;
}