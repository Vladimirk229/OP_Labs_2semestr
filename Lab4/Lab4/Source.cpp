#include "Header.h"

//������� ������� ������������ �������� � �������
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

//����� ��������� ���������� �
void MovingPoint::SetX(int x)
{
    this->x = x;
}

//����� ��������� ���������� �
void MovingPoint::SetY(int y)
{
    this->y = y;
}

//����� ��������� ���������� z
void MovingPoint::SetZ(int z)
{
    this->z = z;
}

//����������� ����� ���������� ���������
void MovingPoint::CoordUpdate(unsigned int time)
{
    this->x = this->x + time;
    this->y = this->y + time;
}

//����� �������� ���������� �
int MovingPoint::GetX()
{
    return(this->x);
}

//����� �������� ���������� �
int MovingPoint::GetY()
{
    return(this->y);
}

//����� �������� ���������� z
int MovingPoint::GetZ()
{
    return(this->z);
}

//����� ������� ���������� ����� ����� ���������� �������
int MovingPoint::Distance2D(MovingPoint Point2)
{
    int dist = sqrt((Point2.x - this->x) * (Point2.x - this->x) + (Point2.y - this->y) * (Point2.y - this->y));
    return(dist);
}

//����� ������� ���������� ����� ����� ���������� �������
int MovingPoint::Distance3D(MovingPoint Point2)
{
    int dist = sqrt((Point2.x - this->x) * (Point2.x - this->x) + (Point2.y - this->y) * (Point2.y - this->y) + (Point2.z - this->z) * (Point2.z - this->z));
    return(dist);
}

//����� ������� ��������� ��� ��������� �����
void MovingPoint2::CoordCalculate(unsigned int time)
{
    this->x = this->x + sin(time);
    this->y = this->y + cos(time);
}

//����� ������� ��������� ��� ��������� �����
void MovingPoint3::CoordCalculate(unsigned int time)
{
    this->x = this->x + sin(time);
    this->y = this->y + cos(time);
    this->z = this->z + (time * time);
}