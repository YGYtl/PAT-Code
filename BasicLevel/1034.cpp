#include <stdio.h>
long long GCD(long long a, long long b) {
	long long m = a % b;
	while(m) {
		a = b;
		b = m;
		m = a % b;
	}
	return b;
}
void PrintFraction(long long a, long long b) {
	long long k = 1;
	if(b == 0) {
		printf("Inf");
		return;
	}
	if(a < 0) {
		a = -a;
		k = -1;
	}
	long long gcd = GCD(a, b);
	a /= gcd;
	b /= gcd;
	if(a / b == 0 && a != 0) {
		if(a > 0)
			printf("%lld/%lld", a, b);
		else
			printf("(-%lld/%lld)", a, b);
		return;
	}
	k = k * a / b;
	a %= b;
	if(b == 1 && k < 0)
		printf("(%lld)", k);
	else if(b == 1 && k >= 0)
		printf("%lld", k);
	else if(k < 0)
		printf("(%lld %lld/%lld)", k, a, b);
	else
		printf("%lld %lld/%lld", k, a, b);
}
void Print(long long a1, long long b1, long long a2, long long b2, char ch) {
	long long c1, c2;
	PrintFraction(a1, b1);
	printf(" %c ", ch);
	PrintFraction(a2, b2);
	printf(" = ");
	switch(ch) {
	case '+':
		c1 = a1 * b2 + a2 * b1;
		c2 = b1 * b2;
		PrintFraction(c1, c2);
		printf("\n");
		break;
	case '-':
		c1 = a1 * b2 - a2 * b1;
		c2 = b1 * b2;
		PrintFraction(c1, c2);
		printf("\n");
		break;
	case '*':
		c1 = a1 * a2;
		c2 = b1 * b2;
		PrintFraction(c1, c2);
		printf("\n");
		break;
	case '/':
		c1 = a1 * b2;
		c2 = b1 * a2;
		if(c2 < 0) {
			c2 = -c2;
			c1 = -c1;
		}
		PrintFraction(c1, c2);
		printf("\n");
		break;
	}
}
int main() {
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	Print(a1, b1, a2, b2, '+');
	Print(a1, b1, a2, b2, '-');
	Print(a1, b1, a2, b2, '*');
	Print(a1, b1, a2, b2, '/');
	return 0;
}

