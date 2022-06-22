#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int Min(int* ptr, int size);//������� ������� ������������ �������� � �������

class MovingPoint//�������� �����
{
protected:
    int x;//���������� �
    int y;//���������� �
    int z;//���������� z
public:
    void SetX(int x);//����� ��������� ���������� �
    void SetY(int y);//����� ��������� ���������� �
    void SetZ(int z);//����� ��������� ���������� z
    void CoordUpdate(unsigned int time);//����������� ����� ���������� ���������
    int GetX();//����� ��������� ���������� �
    int GetY();//����� ��������� ���������� �
    int GetZ();//����� ��������� ���������� z
    int Distance2D(MovingPoint Point2);//����� ������� ���������� ����� ����� ���������� �������
    int Distance3D(MovingPoint Point2);//����� ������� ���������� ����� ����� ���������� �������
};

class MovingPoint2 :public MovingPoint//����� ��� ������ � ���������� �������
{
public:
    void CoordCalculate(unsigned int time);//����� ������� ��������� ��� ��������� �����
};

class MovingPoint3 :public MovingPoint//����� ��� ������ � ���������� �������
{
public:
    void CoordCalculate(unsigned int time);//����� ������� ��������� ��� ��������� �����
};
