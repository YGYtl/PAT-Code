#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a, int b)
{
  return a < b;
}

int main()
{
  int n;
  cin >> n;
  int i, k=1, temp=1;
  int *a = new int [n];
  int *b = new int [n];
  for (i=0; i<n; i++) cin >> a[i];
  for (i=0; i<n; i++) cin >> b[i];
  int j;
  for (i=0; i<n-1&&b[i]<=b[i+1]; i++);
  for (j=i+1; j<n&&a[j]==b[j]; j++);
  
  if(j==n)
  {
    cout << "Insertion Sort" << endl;
    sort(a, a+i+2, cmp);
  }
  else{
    cout << "Merge Sort" << endl;
    while(temp)
    {
      temp = 0;
      
      for(i=0; i<n; i++)
      {
        if(a[i]!=b[i])
        {
          temp = 1;
          break;
        }
      }
      k = k * 2;
      for(i=0; i<n/k; i++)
      {
        sort(a+i*k, a+(i+1)*k, cmp);
      }
      sort(a+n/k*k, a+n, cmp);
    }
  }
  for (i=0; i<n-1; i++)
  {
    cout << a[i] << " ";
  }
  cout << a[i] << endl;
  return 0;
}