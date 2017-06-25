#include<iostream>
#include<algorithm>
#include<utility>   // pair 头文件
#include<map>
#include<string>
using namespace std;
int main()
{
	multimap<string, string>course;
	typedef multimap<string, string>::iterator courseit;   //类型申明
	course.insert(make_pair("c++", "2-6"));
	course.insert(make_pair("complier", "263-6"));
	course.insert(make_pair("complier", "2-6661"));
	course.insert(make_pair("complier", "211-6"));
	course.insert(make_pair("os", "2-67"));
	course.insert(make_pair("os", "5-5"));
	//输入一个课程，直到找到该课程为止，记下上课次数
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
	pair<courseit, courseit>range = course.equal_range(name);//得到该课程对应的区间
	for (multimap<string, string>::iterator it = range.first; it != range.second; it++)
		//first指向区间头，second指向区间尾
		cout << it->second << " " << endl;
	return 0;
}
