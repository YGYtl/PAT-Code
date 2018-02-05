#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char name[10]={'\0'}, maxname[10] = {'\0'}, minname[10] = {'\0'};
	scanf("%d", &n);
	int i;
	int count=0;
	int year, month, day;
	int maxyear=0, minyear=9999, maxmonth=0, minmonth=9999, maxday=0, minday=9999;
	for (i = 0; i < n; i++) 
	{
		scanf("%s %d/%d/%d", name, &year, &month, &day);
	    if((year < 2014 || (year == 2014 && month < 9) || (year == 2014 && month == 9 && day <= 6)) &&
	       (year > 1814 || (year == 1814 && month > 9) || (year == 1814 && month == 9 && day >= 6))) {
	        count++;
	        if(year > maxyear || (year == maxyear && month > maxmonth) || (year == maxyear && month == maxmonth && day > maxday)) {
	            maxyear = year;
	            maxmonth = month;
	            maxday = day;
	            strcpy(maxname,name);
	        }
	        if(year < minyear || (year == minyear && month < minmonth) || (year == minyear && month == minmonth && day < minday)) {
	            minyear = year;
	            minmonth = month;
	            minday = day;
	            strcpy(minname,name);
	        }
	    }
	}
	if(count==0) printf("0");
	else printf("%d %s %s", count, minname, maxname);
	return 0;
}