#include "Prototypes.h"

#pragma region//-----Реализации методов класса-----
void Progression::SetFirstNum(int a)
{
	this->a = a;
}

void Progression::SetQ(int q)
{
	this->q = q;
}

void Progression::SetSize(int n)
{
	this->n = n;
}

int Progression::GetLastNum()
{
	LastNum = a;
	for (int i = 1; i < n; i++)
	{
		LastNum = LastNum * q;
	}
	return(LastNum);
}
#pragma endregion

int BiggestLastNum(Progression* ptr, unsigned int size)//Реализация функции
{
    int max = ptr->GetLastNum();
    int pos = 0;
    for (int i = 0; i < size; i++)//Цикл проверки каждой прогрессии в массиве
    {
        if (((ptr + i)->GetLastNum()) > max)
        {
            max = (ptr + i)->GetLastNum();
            pos = i;
        }
    }
    return(pos);
}