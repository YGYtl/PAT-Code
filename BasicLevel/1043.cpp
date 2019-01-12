#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int cP=0, cA=0, cT=0, ce=0, cs=0, ct=0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='P') cP++;
		if(a[i]=='A') cA++;
		if(a[i]=='T') cT++;
		if(a[i]=='e') ce++;
		if(a[i]=='s') cs++;
		if(a[i]=='t') ct++;
	}
	while(cP!=0||cA!=0||cT!=0||ce!=0||cs!=0||ct!=0)
	{
		if(cP!=0) {
			printf("P");
			cP--;
		}
		if(cA!=0) {
			printf("A");
			cA--;
		}
		if(cT!=0) {
			printf("T");
			cT--;
		}
		if(ce!=0) {
			printf("e");
			ce--;
		}
		if(cs!=0) {
			printf("s");
			cs--;
		}
		if(ct!=0) {
			printf("t");
			ct--;
		}
	}
	return 0;
}
