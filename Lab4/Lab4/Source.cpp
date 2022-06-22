#include "Header.h"

//Функция расчёта минимального значения в массиве
int Min(int* ptr, int size)
{
    int min = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    return(min);
}

//Метод установки координаты х
void MovingPoint::SetX(int x)
{
    this->x = x;
}

//Метод установки координаты у
void MovingPoint::SetY(int y)
{
    this->y = y;
}

//Метод установки координаты z
void MovingPoint::SetZ(int z)
{
    this->z = z;
}

//Стандартный метод обновления координат
void MovingPoint::CoordUpdate(unsigned int time)
{
    this->x = this->x + time;
    this->y = this->y + time;
}

//Метод возврата координаты х
int MovingPoint::GetX()
{
    return(this->x);
}

//Метод возврата координаты у
int MovingPoint::GetY()
{
    return(this->y);
}

//Метод возврата координаты z
int MovingPoint::GetZ()
{
    return(this->z);
}

//Метод расчёта расстояния между двумя двумерными точками
int MovingPoint::Distance2D(MovingPoint Point2)
{
    int dist = sqrt((Point2.x - this->x) * (Point2.x - this->x) + (Point2.y - this->y) * (Point2.y - this->y));
    return(dist);
}

//Метод расчёта расстояния между двумя трёхмерными точками
int MovingPoint::Distance3D(MovingPoint Point2)
{
    int dist = sqrt((Point2.x - this->x) * (Point2.x - this->x) + (Point2.y - this->y) * (Point2.y - this->y) + (Point2.z - this->z) * (Point2.z - this->z));
    return(dist);
}

//Метод расчёта координат для двумерной точки
void MovingPoint2::CoordCalculate(unsigned int time)
{
    this->x = this->x + sin(time);
    this->y = this->y + cos(time);
}

//Метод расчёта координат для трёхмерной точки
void MovingPoint3::CoordCalculate(unsigned int time)
{
    this->x = this->x + sin(time);
    this->y = this->y + cos(time);
    this->z = this->z + (time * time);
}