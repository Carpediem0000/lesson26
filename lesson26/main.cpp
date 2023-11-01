#include <vector>
#include <algorithm>
#include "Student.h"
#include <ctime>


int main()
{
	/*Array<int> a(7, 5);
	Array<float> b(2.5, 10);
	Array<string> c("hello", 5);

	a.print();
	a.push(8);
	a.push(2);
	a.push(3);
	a.push(15);
	a.push(-4);
	a.push(5);
	a.push(1);
	a.print();
	a.insert(4, 2);
	a.print();
	a.erase(2);
	a.print();
	cout << "max => "<< a.find_max() << endl;
	cout << "min => " << a.find_min() << endl;
	a.sort();
	a.print();
	a.at(1) = 2;
	a[0] = 0;
	a.print();*/
	/*srand(time(0));

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 100 - 50);
	}

	vector<int>::iterator it;

	for (it = v.begin();  it< v.end(); ++)
	{
		cout << *it << "  ";
	}
	cout << endl;
	cout << "----------------------------\n";

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "  ";
	}
	cout << endl;
	cout << "----------------------------\n";

	for (int x:v)
	{
		cout << x << "  ";
	}
	cout << endl;
	cout << "----------------------------\n";

	for_each(v.begin(), v.end(), [](int x) {cout << x << " "; });
	cout << endl;*/

	/*vector<int> v1 = { 1,2,3,4,5,6,7 };*/
	/*v1.insert(v1.begin() + v1.size() / 2, 5, 0);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;*/
	/*v1.erase(v1.begin() + v1.size() / 2 - 1, v1.begin() + v1.size() / 2 + 2);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl; */
	
	/*vector<int> v2 = { 1,2,3,0,4,5,6,0,7 };
	auto it = find(v2.begin(), v2.end(), 0);
	if (it == v2.end()) cout << "Not found first 0 :(\n";
	else
	{
		it = find(it + 1, v2.end(), 0);
		if (it == v2.end()) cout << "Not found second 0 :(\n";
		else
		{
			v2.erase(it);
		}
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;*/

	/*int a = 45, b = -2;
	vector<int> v1(10), v2(10);
	for (int i = 0; i < v1.size(); i++)
	{
		if (i<v1.size()/2)
		{
			v1.push_back(a);
			v2.push_back(a);
		}
		else
		{
			v1.push_back(b);
			v2.push_back(b);
		}
	}*/

	/*vector<int> v1 = { -54,2,435,-456,123,6341,-23, 435, -4564 };
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	replace_if(v1.begin(), v1.begin() + v1.size() / 2, [](int x) {return x < 0; }, -1);
	replace_if(v1.begin() + v1.size() / 2, v1.end(), [](int x1) {return x1 > 0; }, 1);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;*/
	
	vector<Student> group;
	group.push_back(Student("Ivan", 25, 2018));
	group.push_back(Student("Bodya", 24, 2019));
	group.push_back(Student("Kolua", 25, 2012));
	group.push_back(Student("Lev", 25, 2016));
	for (int i = 0; i < group.size(); i++)
	{
		group[i].showInfo();
	}
	sort(group.begin(), group.end());
}