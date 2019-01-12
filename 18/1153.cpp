#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
struct data{
	char ch;
	string s1, s2, s3;
	int num;
}a[10004], t;
bool cmp(data o1, data o2){
	if(o1.num!=o2.num) return o1.num > o2.num;
	else return o1.s3 > o2.s3;
}
bool cmp1(data o1, data o2){
	if(o1.num!=o2.num) return o1.num > o2.num;
	else return o1.s3 < o2.s3;
}
int main()
{
	int n, m, num, k = 1, g;
	string s, str, ss;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		cin >> s >> num;
		a[i].ch = s[0];
		str = "";
		for(int j=1; j<s.size(); j++){
			str += s[j];
			if(j==3){
				a[i].s1 = str;
				str = "";
			}
			if(j==9){
				a[i].s2 = str;
				str = "";
			}
		}
		a[i].s3 = str;
		a[i].num = num;
	}
	for(int i=1; i<=m; i++){
		cin >> g >> s;
		cout << "Case " << i << ": " << g << " " << s << endl;
		vector<data> v;
		map<string,int> mp;
		if(g==1){
			int sum = 0;
			for(int j=0; j<n; j++){
				if(a[j].ch==s[0]){
					v.push_back(a[j]);
				}
			}
			sort(v.begin(),v.end(),cmp);
			for(int j=0; j<v.size(); j++){
				cout << v[j].ch << v[j].s1 << v[j].s2 << v[j].s3 << " " << v[j].num << endl;
			}
			if(v.size()==0) cout << "NA" << endl;
			v.clear();
		}
		else if(g == 2){
			int sum = 0, c = 0;
			for(int j=0; j<n; j++){
				if(a[j].s1==s){
					c++;
					sum += a[j].num;
				}
			}
			if(c==0){
				cout << "NA" << endl;
				continue;
			}
			cout << c << " " << sum << endl;
		}
		else if(g==3){
			for(int j=0; j<n; j++){
				if(a[j].s2==s){
					mp[a[j].s1]++;
				}
			}
			map<string,int>::iterator vp;
			for(vp=mp.begin(); vp!=mp.end(); vp++){
				t.s3 = vp->first; t.num = vp->second;
				v.push_back(t);
			}
			sort(v.begin(),v.end(),cmp1);
			for(int j=0; j<v.size(); j++){
				cout << v[j].s3 << " " << v[j].num << endl;
			}
			if(v.size()==0) cout << "NA" << endl;
			v.clear();
		}
	}
	return 0;
}
