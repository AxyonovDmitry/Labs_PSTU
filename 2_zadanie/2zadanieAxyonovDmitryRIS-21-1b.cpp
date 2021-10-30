#include <iostream>
#include <string>
using namespace std;

void lol(string &str1, string str2, string str3) 
{
	int l = str1.find(str2);
	str1.erase(l, str2.size());
	str1.insert(l, str3);
}

int main()
{
	string str;
	bool figs = 0;
	setlocale(LC_ALL, "russian");
	cout << "Введите строку состоящую из символов a и b:\n";
	cin >> str;
	while (figs == 0) 
	{
		int la = str.find("*a");
		int lb = str.find("*b");
		if (la >= 0)
		{
			lol(str, "*a", "");
			figs = 1;
		}
		else if (lb >= 0)
		{
			lol(str, "*b", "");
			figs = 1;
		}
		else 
		{
			lol(str, "", "*");
		}
	}
	cout << "Результат программы:  " << str;
	return 0;
}
