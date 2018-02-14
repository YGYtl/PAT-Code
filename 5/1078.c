#include<stdio.h>
int main()
{
  char a[10000] = {'\0'};
  char ch, k;
  int c=0, i, m=0, j;
  scanf("%c", &ch);
  getchar();
  gets(a);
  if(ch=='C')
  {
    k = a[0];
    for(i=0; a[i]!='\0'; i++)
    {
      if(a[i]!=k)
      {
        if(c>1)
        {
          printf("%d", c);
          m++;
        }
        printf("%c", k);
        k = a[i];
        m++;
        c = 0;
      }
      c++;
    }
    if(c>1)
    {
      printf("%d", c);
    }
    printf("%c", k);
  }
  else{
    for(i=0; a[i]!='\0'; i++)
    {
      if((a[i]>='0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9'))
      {
        m = m*10 + a[i]-'0';
      }
      else{
        if(a[i]>='0'&&a[i]<='9')
        {
          if(m==0) m = a[i]-'0';
          else{
            m = m*10 + a[i]-'0';
          }
          continue;
        }
        if(m==0) printf("%c", a[i]);
        else{
          for(j=0; j<m; j++)
          {
            printf("%c", a[i]);
          }
          m = 0;
        }
      }
    }
  }
  return 0;
}