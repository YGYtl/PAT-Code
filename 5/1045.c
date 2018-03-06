#include <stdio.h>
int main()
{
	//1 3 2 4 5
    int N, count = 0;
    int array[100000], lmax[100000], rmin[100000];
    
    scanf("%d", &N);
    int i, max, min;
    for(i = 0; i < N; i++) scanf("%d", array + i);

    for(i = 0, max = 0; i < N; i++)
    {
    	lmax[i] = array[i] >= array[max] ? array[max = i] : array[max];
//    	printf("%d ", lmax[i]);
	}
//	printf("\n");
    for(i = N - 1, min = i; i >= 0; i--)
    {
    	rmin[i] = array[i] <= array[min] ? array[min = i] : array[min];
//    	printf("%d ", rmin[i]);
	}
//	printf("\n");

    for(i = 0; i < N; i++)
    {
        if(array[i] == lmax[i] && array[i] == rmin[i])
        {
            count++;
		}
        else
            array[i] = 0;
    }

    printf("%d\n", count);
    for(i = 0; i < N && count; i++) if(array[i])
        printf("%d%c", array[i], --count ? ' ' : '\0');
    printf("\n");
    return 0;
}