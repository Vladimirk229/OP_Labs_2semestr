#pragma once

class Set
{
private:
    int iNumbers[100];//Массив с числами
    unsigned int usiNumCount;//Размер массива
public:
    Set();//Конструктор
    Set(int* array, int size);//Второй конструктор
    void SetNum(int NextNum);//Метод, устанавливающий следующее число в множестве
    int GetNum(int Num);//Метод, возвращающий число из множества
    int GetSize();//Метод, возвращающий размер множества
};

Set operator + (Set A, Set B);//Переопределение оператора +

Set operator * (Set A, Set B);//Переопределение оператора *

Set operator - (Set A, Set B);//Переопределение оператора -