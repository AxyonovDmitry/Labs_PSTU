#include <iostream>
#include <clocale>
using namespace std;
//кодирование -- windows1251
//добавляет символ s1 к началу строки str
//равноценно ->s1
void addition(string &str, string s1){
	str = s1 + str;
}	
//заменяет первое вхождение s2 в s1 на s3
//равноценно s2->s3 для s1 в алгоритме Маркова
void replace(string &s1,string s2,string s3){
	int lofolop3 = s1.find(s2);
	int trip = s2.size();
	s1.erase(lofolop3,trip);
	s1.insert(lofolop3,s3);
}
//возвращает 1, если подстрока s2 содержится в s1, иначе же возвращает 0
bool is_in(string &s1,string s2){
	int lofolop3 = s1.find(s2);
	bool good = 0;
	if (lofolop3 != -1){
		good = 1;
	}
	return good;
}
int main(void){
	setlocale(0,"RUS");
	string p;
	bool good = 1;
	cout<<"Введите строку состоящую из символов a,b\n";
cin>>p;
	cout<<"1 правило:\nba->ab\n\n";
	while(is_in(p,"ba")){
		replace(p,"ba","ab");
	}
	cout<<"Результат = "<<p<<endl;
	cout<<"\nВведите строку состоящую из символов a,b,c,d\n";
	cin>>p;
	cout<<"2 правила:\nc-><void>\nbb|->ddd\n\n";
	while( (is_in(p,"c") || is_in(p,"bb")) && good){
		// c->""
		if (is_in(p,"c")){
			replace(p,"c","");

		}
		//bb|->ddd
		else if (is_in(p,"bb")){
			replace(p,"bb","ddd");

			good = 0;
		}
	}
	cout<<"Результат = "<<p<<endl;
	good = 1;
	cout<<"\nВведите строку состоящую из символов a,b\n";
	cin>>p;
	cout<<"4 правила:\n*a->a*\n*b->b*\n*|->a\n<void>->*\n\n";
	do{
		if (is_in(p,"*a")){
			replace(p,"*a","a*");

		}
		else if (is_in(p,"*b")){
			replace(p,"*b","b*");

		}
		else if (is_in(p,"*")){
			replace(p,"*","a");

			good = 0;
		}
		else if (good){
		addition(p,"*");
	}
	}while((is_in(p,"*a") || is_in(p,"*b") || is_in(p,"*")) && good);
	cout<<"Результат = "<<p<<endl;
	return 0;
}
