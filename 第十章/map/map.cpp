#include<algorithm>
#include<iostream>
#include<set>
#include<iterator>
#include<map>
#include<cctype>//����tolower:���Сд isalpha������Ƿ�Ϊ��ĸ 
//ͳ��һ�仰��ÿ����ĸ���ֵĸ���	
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
			s[c]++;                   //����ĸ����Ƶ�ʼ�һ
		}
	} while (c != '.');
	for (map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++)
		cout << iter->first << " :" << iter->second << "   ";

	system("pause");
	return 0;
}