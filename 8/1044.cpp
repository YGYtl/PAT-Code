#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
// 坑爹的格式
int main()
{
	int n, c = 0;
	char g[14][5] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	char sh[14][5] = {"#", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	scanf("%d", &n);
	getchar();
	char s[100]={'\0'};
	while(n--)
	{
		gets(s);
		if(s[0]>='0'&&s[0]<='9')
		{
			int l1 = strlen(s), o1 = 0;
			int sum1 = 0, k1 = 0;
			for(int i=0; i<l1; i++)
			{
				sum1 = sum1 * 10 + s[i]-'0';
			}
			while(sum1 >= 13)
			{
				k1 = sum1/13;
				cout << sh[k1];
				sum1 = sum1%13;
				o1 = 1;
			}
			k1 = sum1%13;
			if(o1==1&&k1!=0) cout << " " << g[k1] << endl;
			else if(o1==1&&k1==0) cout<<endl;
			else cout << g[k1] << endl;
		}
		else{
			char cc[10]={'\0'};
			int l = 0, sum = 0, o = 0;
			c = 0;
			for(int i=0; i<strlen(s); i++)
			{
				l = 0;
				o = 0;
				if(s[i]==' '||i==strlen(s)-1)
				{
					if(i==strlen(s)-1)
					{
						cc[c++] = s[i];
						o = 1;
					}
					for(int j=0; j<13; j++)
					{
						if(strcmp(cc,sh[j])==0)
						{
							sum = j*13;
							l = 1;
							break;
						}
					}
					for(int k=0; k<13&&l==0; k++)
					{
						if(strcmp(cc,g[k])==0)
						{
							sum = sum+k;
							break;
						}
					}
					if(o == 1) cout << sum << endl;
					for(int j=0; j<c; j++)
					{
						cc[j] = '\0';
					}
					c = 0;
					continue;
				}
				cc[c++] = s[i];
			}
		}
	}
	return 0;
}