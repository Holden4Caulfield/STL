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


}