#pragma once
#include <iostream>

using namespace std;

struct Leaf//��������� ������� ������
{
    char symbol;//������, ���������� � �������
    Leaf* right;//��������� �� ������� �������
    Leaf* left;//��������� �� ������ �������
    int level;//�������, �� ������� ��������� �������
};

Leaf* addnode(char sym, Leaf* oldnode);//������� ���������� ������� � ������
void TreeCheck(Leaf* StartNode, int* max);//������� ������ ������