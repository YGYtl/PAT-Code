#include <stdio.h>
int main()
{
    int n, count = 0;
    int a[100001], lmax[100001], rmin[100001];
    scanf("%d", &n);
    int i, max, min;
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0, max = 0; i < n; i++)
    {
    	lmax[i] = a[i] >= a[max] ? a[max = i] : a[max];
	}
    for(i = n - 1, min = i; i >= 0; i--)
    {
    	rmin[i] = a[i] <= a[min] ? a[min = i] : a[min];
	}
    for(i = 0; i < n; i++)
    {
        if(a[i] == lmax[i] && a[i] == rmin[i])
        {
            count++;
		}
        else
            a[i] = 0;
    }

    printf("%d\n", count);
    for(i = 0; i < n && count; i++)
		if(a[i])
	        printf("%d%c", [i], --count ? ' ' : '\0');
    printf("\n");
    return 0;
}
