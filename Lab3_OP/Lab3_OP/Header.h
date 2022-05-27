#pragma once
#include <iostream>

using namespace std;

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
    void EnterNums(int size);//Метод, осуществляющий ввод чисел в множество
    void SetPrint();//Метод, осуществляющий вывод чисел из множества
};

Set operator + (Set A, Set B);//Переопределение оператора +

Set operator * (Set A, Set B);//Переопределение оператора *

Set operator - (Set A, Set B);//Переопределение оператора -