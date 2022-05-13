#include <iostream>
#include "Prototypes.h"

using namespace std;

int main()//Основной код
{
    setlocale(LC_ALL, "Russian");
    unsigned int m;//Размер массива
    int buf;
    cout << "Задайте размер массива объектов класса 'Геометрическая прогрессия': ";
    cin >> m;
    Progression* ProgArray = new Progression[m];//Создание динамического массива с объектами класса
    for (int i = 0; i < m; i++)//Цикл заполнения массива
    {
        cout << "\nПрогрессия №" << i + 1 << endl;
        cout << "Первый член прогрессии: ";
        cin >> buf;
        ProgArray[i].SetFirstNum(buf);
        cout << "Знаменатель: ";
        cin >> buf;
        ProgArray[i].SetQ(buf);
        cout << "Размер прогрессии: ";
        cin >> buf;
        ProgArray[i].SetSize(buf);
        cout << "Последний член прогрессии: " << ProgArray[i].GetLastNum() << endl;
    }
    //Вычисление номера прогресии с самым большим последним членом и запись результата в новую переменную
    int BiggestNumPos = BiggestLastNum(&ProgArray[0], m);
    
    cout << "\nНомер прогрессии с самым большим последним членом: " << BiggestNumPos + 1 << endl;//Вывод результата

    delete[] ProgArray;//Удаление массива
    ProgArray = nullptr;//Обнуление указателя
}