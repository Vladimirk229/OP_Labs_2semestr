#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int Min(int* ptr, int size);//Функция расчёта минимального значения в массиве

class MovingPoint//Основной класс
{
protected:
    int x;//Координата х
    int y;//Координата у
    int z;//Координата z
public:
    void SetX(int x);//Метод установки координаты х
    void SetY(int y);//Метод установки координаты у
    void SetZ(int z);//Метод установки координаты z
    void CoordUpdate(unsigned int time);//Стандартный метод обновления координат
    int GetX();//Метод получения координаты х
    int GetY();//Метод получения координаты у
    int GetZ();//Метод установки координаты z
    int Distance2D(MovingPoint Point2);//Метод расчёта расстояния между двумя двумерными точками
    int Distance3D(MovingPoint Point2);//Метод расчёта расстояния между двумя трёхмерными точками
};

class MovingPoint2 :public MovingPoint//Класс для работы с двумерными точками
{
public:
    void CoordCalculate(unsigned int time);//Метод расчёта координат для двумерной точки
};

class MovingPoint3 :public MovingPoint//Класс для работы с трёхмерными точками
{
public:
    void CoordCalculate(unsigned int time);//Метод расчёта координат для трёхмерной точки
};
