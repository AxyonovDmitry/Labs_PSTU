#include <iostream>
#include <string>
using namespace std;

void ch(string &s1, string s2, string s3) 
{
	int i = s1.find(s2);
	s1.erase(i, s2.size());
	s1.insert(i, s3);
}

int main()
{
	string s;
	bool flag = 0;
	setlocale(0, "");
	cout << "Введите строку из символов a и b:\n";
	cin >> s;
	while (flag == 0) 
	{
		int ia = s.find("*a");
		int ib = s.find("*b");
		if (ia >= 0)
		{
			ch(s, "*a", "");
			flag = 1;
		}
		else if (ib >= 0)
		{
			ch(s, "*b", "");
			flag = 1;
		}
		else 
		{
			ch(s, "", "*");
		}
	}
	cout << "Результат - " << s;
	return 0;
}
