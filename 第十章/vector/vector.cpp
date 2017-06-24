#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<deque>
using namespace std;
int main()
{
	istream_iterator<int> i1(cin), i2;
	vector<int>s(i1, i2);
	copy(s.rbegin(), s.rend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	sort(s.begin(), s.end());
	deque<int>s2;
	for (vector<int>::iterator iter = s.begin(); iter != s.end(); iter++)
	{
		if (*iter % 2 == 0)s2.push_back(*iter);
		else s2.push_front(*iter);
	}
	copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}
