#include <iostream>
#include <clocale>
using namespace std;
//encoding -- windows1251
//разбиваю задачу на подзадачи
//передаю аргументы по сслыке для удобства
//добавляет символ str1 к началу строки str
//эквивалентно ->str1
void addition(string &str, string str1){
	str = str1 + str;
}	
//заменяет первое вхождение str2 в str1 (если такое существует) на str3
//эквивалентно str2->str3 для str1 в алгоритме Маркова
void replace(string &str1,string str2,string str3){
	int pos = str1.find(str2);
	int len = str2.size();
	str1.erase(pos,len);
	str1.insert(pos,str3);
}
//возвращает 1, если подстрока str2 содержится в str1, иначе возвращает 0
bool is_in(string &str1,string str2){
	int pos = str1.find(str2);
	bool ok = 0;
	if (pos != -1){
		ok = 1;
	}
	return ok;
}
int main(void){
	setlocale(0,"RUS");
	string p;
	bool flag = 1;
	cout<<"Введите строку состоящую из символов a,b\n";
cin>>p;
	cout<<"Одно единственное правило:\nba->ab\n\n";
	while(is_in(p,"ba")){
		replace(p,"ba","ab");
		cout<<p<<endl;
	}
	cout<<"Result = "<<p<<endl;
	cout<<"\nВведите строку состоящую из символов a,b,c,d\n";
	cin>>p;
	cout<<"Всего два правила:\nc-><void>\nbb|->ddd\n\n";
	while( (is_in(p,"c") || is_in(p,"bb")) && flag){
		// c->""
		if (is_in(p,"c")){
			replace(p,"c","");
			cout<<p<<endl;
		}
		//bb|->ddd
		else if (is_in(p,"bb")){
			replace(p,"bb","ddd");
			cout<<p<<endl;
			flag = 0;
		}
	}
	cout<<"Result = "<<p<<endl;
	flag = 1;
	cout<<"\nВведите строку состоящую из символов a,b\n";
	cin>>p;
	cout<<"Всего четыре правила:\n*a->a*\n*b->b*\n*|->a\n<void>->*\n\n";
	do{
		if (is_in(p,"*a")){
			replace(p,"*a","a*");
			cout<<p<<endl;
		}
		else if (is_in(p,"*b")){
			replace(p,"*b","b*");
			cout<<p<<endl;
		}
		else if (is_in(p,"*")){
			replace(p,"*","a");
			cout<<p<<endl;
			flag = 0;
		}
		else if (flag){
		addition(p,"*");
		cout<<p<<endl;}
	}while((is_in(p,"*a") || is_in(p,"*b") || is_in(p,"*")) && flag);
	cout<<"Result = "<<p<<endl;
	return 0;
}
