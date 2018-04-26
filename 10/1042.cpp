#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
using namespace std;
map<int,string> m, m1;
vector<int> q;
int main()
{
	m[1] = "S1", m[2] = "S2", m[3] = "S3", m[4] = "S4", m[5] = "S5", m[6] = "S6", m[7] = "S7", 
	m[8] = "S8", m[9] = "S9", m[10] = "S10", m[11] = "S11", m[12] = "S12", m[13] = "S13";
	m[14] = "H1", m[15] = "H2", m[16] = "H3", m[17] = "H4", m[18] = "H5", m[19] = "H6", m[20] = "H7", m[21] = "H8", m[22] = "H9", 
	m[23] = "H10", m[24] = "H11", m[25] = "H12", m[26] = "H13", m[27] = "C1", m[28] = "C2", m[29] = "C3", m[30] = "C4", 
	m[31] = "C5", m[32] = "C6", m[33] = "C7", m[34] = "C8", m[35] = "C9", m[36] = "C10", m[37] = "C11", m[38] = "C12", m[39] = "C13",
	m[40] = "D1", m[41] = "D2", m[42] = "D3", m[43] = "D4", m[44] = "D5", m[45] = "D6", m[46] = "D7", m[47] = "D8", m[48] = "D9",
	m[49] = "D10", m[50] = "D11", m[51] = "D12", m[52] = "D13", m[53] = "J1", m[54] = "J2";
	int n, k, c=1;
	scanf("%d", &n);
	for(int i=0; i<54; i++)
	{
		scanf("%d", &k);
		q.push_back(k);
	}
	while(n--)
	{
		c = 1;
		vector<int>::iterator v;
		for(int i=1; i<=54; i++)
		{
			m1[i] = "0";
		}
		for(v = q.begin(); v!=q.end(); v++)
		{
			m1[*v] = m[c++];
		}
		m = m1;
	}
	for(int i=1; i<=54; i++)
	{
		if(i!=1) cout <<' ';
		cout << m[i];
	}
	return 0;
}