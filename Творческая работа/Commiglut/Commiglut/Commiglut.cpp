#include <iostream>
#include <glut.h>
#include"Graph.h"
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus"); //Руссификация
	glutInit(&argc, argv); //Инициализирует библиотеку GLUT и согласует сеанс с оконной системой.
	makeGraph(); //Функция создание графа
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WinW, WinH); //Функция задания ширины и высоты окна
	glutCreateWindow("Graph"); //Функция создания окна
	glutDisplayFunc(display); //Функция дисплея
	glutReshapeFunc(reshape); //Функция изменения
	glutMouseFunc(mouseClick); //Функция клика мыши
	glutPassiveMotionFunc(mouseMove); //Функция перемещения курсора
	glutMainLoop(); //Функция циклического окна
}
