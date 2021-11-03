#include <iostream> //включение директивы препроцессора для использования потоков (ввода/вывода)
using namespace std; //использование стандартного пространства имен
int main(void) //главная функция
{
setlocale(LC_ALL, "russian"); //локализация консоли
int x1, x2, x3, x, y, z; //объявление переменных, отвечающих за начало и конец временного промежутка (в часах, минутах, секундах)
//начало : x1 - часы, x2 - минуты x3 - секунды
cout << "Введите начало временного промежутка (часы, минуты, секунды через пробел) в пределах суток: "; //вывод сообщения
cin >> x1 >> x2 >> x3; //запрос ввода начала промежутка
cout << "\nВведите конец временного промежутка (часы, минуты, секунды через пробел) в пределах суток: "; //вывод сообщения для диалога с пользователем
//конец : x - часы, y - минуты z - секунды
cin >> x >> y >> z; //запрос ввода конца промежутка
int h, m, s; //объявление числовых(целочисленных) переменных, отвечающих за длительность указанного промежутка в h - часах, m- минутах и s - секундах
h = ((x * 3600 + y * 60 + z) - (x1 * 3600 + x2 * 60 + x3)) / 3600; //вычисление часов
m = (((x * 3600 + y * 60 + z) - (x1 * 3600 + x2 * 60 + x3)) - (h * 3600)) / 60; //вычисление минут
s = ((x * 3600 + y * 60 + z) - (x1 * 3600 + x2 * 60 + x3)) - h * 3600 - m * 60; //вычисление секунд
cout << "\nВременной промежуток: " << h << " часов " << m << " минут "<< s << " секунд\n"; //вывод результата
}