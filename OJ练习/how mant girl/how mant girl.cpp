#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int, char>m1;
	int count = 0;
	int id; char sex;
	while (cin >> id)
	{
		cin >> sex;
		m1[id] = sex;
	}
	map<int, char>::iterator iter = m1.begin();
	for (; iter != m1.end(); iter++)
	{
		if ((iter->first) >= 20110000 && (iter->first) <= 20119999 && (iter->second) == 'F')
		{
			count++;
		}
	}
	cout << count;
	system("pause");
	return 0;
}