#pragma once
#include <glut.h>
#include <iostream>
#include <iomanip>
#include <vector> //Вектор - контейнер
#include <string>
using namespace std;

const int maxSize = 20; //Максимальное значение размера 20
extern int WinW; // Ширина окна
extern int WinH; // Высота окна

struct VertexCoord //структура координат вектора
{
	int x, y;
};

class Graph //Класс графа
{
private:
	vector<int> vertList; //список вершин
	int adjMatrix[maxSize][maxSize]; // матрица смежности
public:
	Graph(); //Конструктор
	~Graph(); //Деструктор
	bool IsEmpty(); //Метод если граф пуст
	bool IsFull(); //Метод если граф полон
	int GetVertPos(const int& vertex); //Метод получения положения вершины
	int GetVertText(int i); //Метод получения текста вершины
	vector<int> GetVertList(); //Метод получения списка вершин
	int GetAdjMatrixElem(int i, int j); //Метод получения элементов матрицы смежности
	int GetAmountVerts(); //Метод получения кол-ва вершин
	int GetAmountEdges(); //Метод получения кол-ва ребер
	void SetEdgeZero(int i, int j); //Метод зануления ребер
	void InsertVertex(const int& vertex); //Метод ввода вершин
	void InsertEdge(const int& vertex1, const int& vertex2, int weigth); //Метод ввода ребер
	void Print(); //Метод вывода
	void EraseLastVert(); //Метод удаления последней вершины
	void EraseEdge(const int& vertex1, const int& vertex2); //Метод удаления ребра
	void DrawGraph(); //Метод отрисовки графа
};
extern Graph graph;
void makeGraph(); //Метод создания графа
void reshape(int w, int h); //Метод изменения
void display(); //Метод вызова дисплея
int** Change_Matrix(); //Метод изменения матрицы
int* Search_MinElem(int* line, int n); //Метод поиска минимального элемента
void Print_Matrix(int** matrix); //Метод вывод матрицы
int** Reduct_Matrix(int** oldmatrix); //Метод матрица сокращения
int** High_Zero(int** oldmatrix); //Метод удаления 0 с наибольшей оценкой
void Print_Result(); //Метод вывода результата

void setCoords(int i, int n); //Метод установки координат
bool SalesmanPossible(int** matrix); //Метод возможности задачи о коммивояжере
int ClickOnCircle(int x, int y); //Метод нажатия на круг
void ButtonMouseOn(int x, int y); //Метод нажатия кнопки мыши
void mouseMove(int x, int y); //Метод движения курсора
void mouseClick(int button, int state, int x, int y); //Метод клика мыши

void drawBtnSalesman(); //Метод отрисови кнопки задача коммивояжера
void drawBtnNewGraph(); //Метод отрисови кнопки создания нового графа
void drawBtnAddVertex(); //Метод отрисови кнопки добавления вершины
void drawBtnDelVertex(); //Метод отрисови кнопки удаления вершины
void drawBtnAddEdge(); //Метод отрисови кнопки добавления ребер
void drawBtnDelEdge(); //Метод отрисови кнопки удаления ребер
void drawCircle(int x, int y, int R); //Метод отрисови круга
void drawCircleMouseOn(int x, int y, int R); //Метод отрисови круга на который нажала мышка
void drawText(int nom, int x1, int y1); //Метод отрисови текста
void drawLine(int text, int x0, int y0, int x1, int y1); //Метод отрисови линий
void drawVertex(int n); //Метод отрисовки вершин