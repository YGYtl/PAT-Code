#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double sum = 1.0, a, tem;
	char ch[4] = {'W','T','L'};
	int j, k, i;
	for(j=0; j<3; j++)
	{
		tem = 0.0;
		for(k=0; k<3; k++)
		{
			scanf("%lf", &a);
			if(k==0) tem = a;
			if(tem<=a)
			{
				tem = a;
				i = k;
			}
		}
		cout << ch[i] <<' ';
		sum *= tem;
	}
	printf("%.2f", (sum*0.65-1)*2);
	return 0;
}

// 这道题有点奇葩，加了0.005答案全错。。明明加了0.005才是案例的结果啊
// #include<iostream>
// #include<cstdio>
// using namespace std;
// int main()
// {
// 	double a1, a2, a3;
// 	double sum = 1;
// 	int j;
// 	for(j=0; j<3; j++)
// 	{
// 		scanf("%lf %lf %lf", &a1, &a2, &a3);
// 		if(a1>a2&&a1>a3)
// 		{
// 			cout <<'W'<<' ';
// 			sum *= a1;
// 		}
// 		else if(a2>a1&&a2>a3)
// 		{
// 			cout <<'T' <<' ';
// 			sum *= a2;
// 		}
// 		else if(a3>a1&&a3>a2)
// 		{
// 			cout <<'L'<<' ';
// 			sum *= a3;
// 		}
// 	}
// 	printf("%.2f", (sum*0.65-1)*2);
// 	return 0;
// }