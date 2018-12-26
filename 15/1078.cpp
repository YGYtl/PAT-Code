#include <iostream>
#include <string.h>
using namespace std;
bool judge(int num){
	if(num<=1) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return false;
	}
	return true;
}
int a[10000];
int main(){
	int m, n, x, i;
	cin >> m >> n;
	memset(a, false, sizeof(a));
	while (judge(m) == false) m++;
	while (n--){
		cin >> x;
		for (i = 0; i < m; i++){
			if (a[(x + i*i)%m] == 0){
				cout << (x + i*i) % m << (n ? " " : "\n");
				a[(x + i*i) % m] = 1;
				break;
			}
		}
		if (i == m)
			cout << "-" << (n ? " " : "\n");
	}
	return 0;
}
