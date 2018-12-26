#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int n, count = 0, min_index;
	bool flag = true;
	char c1, c2;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		getchar();
		scanf("%c %c", &c1, &c2);
		if(c1!=c2){
			int c = abs(c1-c2);
			if(c>1) flag = false;
			if(c==1){
				if(count==0) min_index = c1-'0';
				else{
					if(c1-'0'<min_index) min_index = c1-'0';
					count++;
				}
			}
		}
	}
	if(flag){
		printf("YES %d\n", n-1);
	}
	else{
		printf("NO %d\n", min_index/2);
	}
	return 0;
}
