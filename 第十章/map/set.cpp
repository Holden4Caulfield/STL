#include<algorithm>
#include<iostream>
#include<set>
#include<iterator>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int node;
	int arr[] = { 12,18,60 };
	istream_iterator<int>i1(cin), i2;
	
	set<int>s(i1,i2);
	
	set<int>::iterator iter = s.begin();
	s.insert( 50);
	while(iter!=s.end())
	{ 
	cout << *iter<<" ";
	iter++;
	}
	cout << endl << " f de geshu" << c << endl;
	system("pause");
	return 0;
}