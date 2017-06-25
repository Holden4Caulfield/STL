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


}