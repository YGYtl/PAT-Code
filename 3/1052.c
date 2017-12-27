#include<stdio.h>
char hand[12][10];
char eye[12][10];
char mouth[12][10];
int get(char f[12][10]);
int main()
{
	int u1, u2, u3;
	u1 = get(hand);
	u2 = get(eye);
	u3 = get(mouth);
	int s, i;
	int hz, ez, mo, ey, hy;
	scanf("%d", &s);
	for(i=0; i<s; i++)
	{
		scanf("%d%d%d%d%d", &hz, &ez, &mo, &ey, &hy);
		if(hz>u1||hz<1||ez>u2||ez<1||mo>u3||mo<1||ey>u2||ey<1||hz>u1||hz<1)
		{
			printf("Are you kidding me? @\\/@\n");
		}
		else{
			printf("%s(%s%s%s)%s\n", hand[hz], eye[ez], mouth[mo], eye[ey], hand[hy]);
		}
	}
	return 0;
}
int get(char f[12][10])
{
	int ch, j, k, count, o;
	j = 0, k = 0, count = 0, o = 0;
	while((ch = getchar())!='\n')
	{
		if(ch == '[')
		{
			o = 1;
			k = 0;
			j++;
			count++;
		}
		else if(ch == ']')
		{
			o = 0;
		}
		else{
			if(o==1)
			{
				f[j][k++] = ch;
			}
		}
	}
	return count;
}