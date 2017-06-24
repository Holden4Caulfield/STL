#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{ 
		map<string, string>m;
		map<string, int>no;
		string s;
		int numb = 0;
		int n;
		cin >> n;
		while (n--)
		{
			cin >> s;
			string a;
			cin >> a;
			m[s] = a;
			no[a] = ++numb;
		}
		map<string, string>::iterator iter = m.end();
		iter--;
		while (!m.empty())
		{
			string tran = (iter->second);
			map<string, int>::iterator it = no.find(tran);
			cout << "NO." << it->second << ": ";
			cout << iter->second << endl;
			cout << endl;
			m.erase(iter--);
		}
	}
	return 0;
}