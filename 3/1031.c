#include<stdio.h>
int main()
{
  int i, s, sum, k, count;
  int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
  char M[] = {'1', '0', 'X', '9','8', '7', '6', '5', '4', '3', '2'};
  char G[20];
  count = 0;
  scanf("%d", &s);
  for(i=0; i<s; i++)
  {
    scanf("%s", G);
    for(k=0, sum=0; k<17&&G[k]>='0'&&G[k]<='9'; k++)
    {
      sum += (G[k]-'0')*weight[k];
    }
    if(k==17&&G[17]==M[sum%11])
    {
      count++;
    }
    else{
      printf("%s\n", G);
    }
  }
  if(count==s)
  {
    printf("All passed");
  }
  return 0;
}