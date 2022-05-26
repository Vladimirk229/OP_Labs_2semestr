#include "Header.h"

//Конструктор класса по умолчанию
Set::Set()
{
    usiNumCount = 0;
}

//Конструктор класса, принимающий массив
Set::Set(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        iNumbers[i] = *(array + i);
        usiNumCount = i;
    }
}

//Метод класса, устанавливающий следующий номер во множестве
void Set::SetNum(int NextNum)
{
    iNumbers[usiNumCount] = NextNum;
    usiNumCount++;
}

//Метод класса, возвращающий определённое число из множества
int Set::GetNum(int Num)
{
    return(iNumbers[Num]);
}

//Метод класса, возвращающий размер множества
int Set::GetSize()
{
    return(usiNumCount);
}

//Переопределённый оператор выполняет операцию объединения множеств (объединения всех элементов в одно множество)
Set operator+(Set A, Set B)
{
    Set C;
    for (int i = 0; i < A.GetSize(); i++)
    {
        C.SetNum(A.GetNum(i));
    }
    bool flag = false;
    for (int i = 0; i < B.GetSize(); i++)
    {
        for (int j = 0; j < A.GetSize(); j++)
        {
            if (B.GetNum(i) == A.GetNum(j) && flag == false)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            C.SetNum(B.GetNum(i));
        }
        flag = false;
    }
    return(C);
}


//Переопределённый оператор выполняет операцию пересечения множеств (нахождения общих элементов)
Set operator*(Set A, Set B)
{
    Set C;
    bool flag = false;
    for (int i = 0; i < A.GetSize(); i++)
    {
        for (int j = 0; j < B.GetSize(); j++)
        {
            if (A.GetNum(i) == B.GetNum(j) && flag == false)
            {
                C.SetNum(A.GetNum(i));
                flag = true;
            }
        }
        flag = false;
    }
    return(C);
}


//Переопределённый оператор находит разницу множеств 
//(создаёт множество чисел, где есть все те числа из первого множества, которых нет во втором) 
Set operator-(Set A, Set B)
{
    Set C;
    bool flag = false;
    for (int i = 0; i < A.GetSize(); i++)
    {
        for (int j = 0; j < B.GetSize(); j++)
        {
            if (A.GetNum(i) == B.GetNum(j) && flag == false)
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            C.SetNum(A.GetNum(i));
        }
        flag = false;
    }
    return(C);
}