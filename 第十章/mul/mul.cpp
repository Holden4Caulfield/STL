#include<iostream>
#include<algorithm>
#include<utility>   // pair ͷ�ļ�
#include<map>
#include<string>
using namespace std;
int main()
{
	multimap<string, string>course;
	typedef multimap<string, string>::iterator courseit;   //��������
	course.insert(make_pair("c++", "2-6"));
	course.insert(make_pair("complier", "263-6"));
	course.insert(make_pair("complier", "2-6661"));
	course.insert(make_pair("complier", "211-6"));
	course.insert(make_pair("os", "2-67"));
	course.insert(make_pair("os", "5-5"));
	//����һ���γ̣�ֱ���ҵ��ÿγ�Ϊֹ�������Ͽδ���
	string name;
	int count;
	do
	{
		cin >> name;
		count = course.count(name);
		if (count == 0)
		{
			cout << "can not find this class" << endl;
		}
	} while (count == 0);
	pair<courseit, courseit>range = course.equal_range(name);//�õ��ÿγ̶�Ӧ������
	for (multimap<string, string>::iterator it = range.first; it != range.second; it++)
		//firstָ������ͷ��secondָ������β
		cout << it->second << " " << endl;
	return 0;
}
