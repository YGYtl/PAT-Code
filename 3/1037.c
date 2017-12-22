#include<stdio.h>
int main()
{
	long long G1, G2, sum1, sum2;
	int S1, K1;
	int S2, K2;
	scanf("%lld.%d.%d %lld.%d.%d", &G1, &S1, &K1, &G2, &S2, &K2);
	//Sickle是[0, 17)区间内的整数
	//Knut是[0, 29)区间内的整数。
	sum1 = G1*17*29 + S1*29 + K1;
	sum2 = G2*17*29 + S2*29 + K2;
	if(sum1>sum2)
	{
		sum1 = sum1-sum2;
		G1 = sum1/(17*29);
		sum1 = sum1 - G1*(17*29);
		S1 = sum1/29;
		sum1 = sum1 - S1*29;
		K1 = sum1;
		G1 = (-1)*G1;
	}
	else{
		sum1 = sum2-sum1;
		G1 = sum1/(17*29);
		sum1 = sum1 - G1*(17*29);
		S1 = sum1/29;
		sum1 = sum1 - S1*29;
		K1 = sum1;
	}
	printf("%lld.%d.%d", G1, S1, K1);
	return 0;
}