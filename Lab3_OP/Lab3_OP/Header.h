#pragma once
#include <iostream>

using namespace std;

class Set
{
private:
    int iNumbers[100];//������ � �������
    unsigned int usiNumCount;//������ �������
public:
    Set();//�����������
    Set(int* array, int size);//������ �����������
    void SetNum(int NextNum);//�����, ��������������� ��������� ����� � ���������
    int GetNum(int Num);//�����, ������������ ����� �� ���������
    int GetSize();//�����, ������������ ������ ���������
    void EnterNums(int size);//�����, �������������� ���� ����� � ���������
    void SetPrint();//�����, �������������� ����� ����� �� ���������
};

Set operator + (Set A, Set B);//��������������� ��������� +

Set operator * (Set A, Set B);//��������������� ��������� *

Set operator - (Set A, Set B);//��������������� ��������� -