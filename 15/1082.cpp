#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char sz[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi",
	"ba", "jiu"};
	char jw[10][5] = {"Shi", "Bai", "Qian", "Wan", "Yi"};
	int a, aa[10], c=0;
	scanf("%d", &a);
	if(a < 0)
	{
		printf("Fu ");
		a = a*-1;
	}
	if(a==0) aa[c++] = 0;
	for(int i=0; a; i++)
	{
		aa[i] = a%10;
		a /= 10;
		c++;
	}
	for(int i=c-1; i>=0; i--)
	{	
		if(i==8)
		{
			printf("%s %s ", sz[aa[i]], jw[4]);//亿 
		}
		if(i==7)
		{
			if(aa[i]==0&&aa[i-1]==0) continue;
			printf("%s ", sz[aa[i]]);//千万 
			if(aa[i]!=0) printf("%s ", jw[2]);
		} 
		if(i==6)
		{
			if(aa[i]==0&&aa[i-1]==0) continue;
			printf("%s ", sz[aa[i]]);//百万 
			if(aa[i]!=0) printf("%s ", jw[1]);
		}
		if(i==5)
		{
			if(aa[i]==0&&aa[i-1]==0) continue;
			printf("%s ", sz[aa[i]]);//十万 
			if(aa[i]!=0) printf("%s ", jw[0]);
		} 
		if(i==4)//万 
		{
			if(aa[i]!=0) printf("%s ", sz[aa[i]]);
			printf("%s ", jw[3]);
		}
		if(i==3)//千 
		{
			if(aa[i]==0&&aa[i-1]==0) continue;
			printf("%s ", sz[aa[i]]);
			if(aa[i]!=0) printf("%s ", jw[2]);
		}
		if(i==2)//百 
		{
			if(aa[i]==0&&aa[i-1]==0) continue;
			printf("%s ", sz[aa[i]]);
			if(aa[i]!=0) printf("%s ", jw[1]);
			if(aa[i-2]==0&&aa[i-1]==0) i-=3;
		}
		if(i==1)//十 
		{
			printf("%s ", sz[aa[i]]);
			if(aa[i]!=0) printf("%s ", jw[0]);
			if(aa[i-1]==0) i-=3;
		}
		if(i==0) printf("%s\n", sz[aa[i]]);//个 
	}
	return 0;
}
