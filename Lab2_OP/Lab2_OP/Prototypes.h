#pragma once

class Progression//Прототип класса прогрессии
{
private:
    int a;//Первый член прогресии
    int q;//Знаменатель
    int n;//Размер прогресии
    int LastNum;//Последний член прогресии
public:
    //--Сеттеры для свойств класса--
    void SetFirstNum(int a);
    void SetQ(int q);
    void SetSize(int n);
    //------------------------------
    int GetLastNum();//Метод вычисления последнего члена прогрессии
};

int BiggestLastNum(Progression* ptr, unsigned int size);//Прототип функции вычисления позиции последнего члена прогрессии