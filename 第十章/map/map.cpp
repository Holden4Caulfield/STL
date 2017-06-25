#include<algorithm>
#include<iostream>
#include<set>
#include<iterator>
#include<map>
#include<cctype>//包含tolower:变成小写 isalpha：检查是否为字母 
//统计一句话中每个字母出现的个数	
using namespace std;
int main()
{
	map<char, int>s;
	char c;
	do
	{
		cin >> c;
		if (isalpha(c))
		{
			c = tolower(c);
			s[c]++;                   //该字母出现频率加一
		}
	} while (c != '.');
	for (map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++)
		cout << iter->first << " :" << iter->second << "   ";

	system("pause");
	return 0;
}