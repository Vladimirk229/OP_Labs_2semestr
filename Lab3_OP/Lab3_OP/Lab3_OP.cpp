#include <iostream>
#include "Header.h"

using namespace std;

//=========Главная функция=========
int main()
{
    setlocale(LC_ALL, "Russian");
    Set A;//Первое множество
    Set B;//Второе множество
    int SizeA;//Размер первого множества
    int SizeB;//Размер второго множества
    cout << "Введите размер множества А: ";
    cin >> SizeA;
    cout << "Введите размер множества B: ";
    cin >> SizeB;
    cout << "\nВведите " << SizeA << " чисел для множества А:" << endl;
    for (int i = 0; i < SizeA; i++)//Ввод чисел для первого множества
    {
        int buf;
        cin >> buf;
        A.SetNum(buf);
    }
    cout << "\nВведите " << SizeB << " чисел для множества B:" << endl;
    for (int i = 0; i < SizeB; i++)//Ввод чисел для второго множества
    {
        int buf;
        cin >> buf;
        B.SetNum(buf);
    }
    Set D = A + B;//Промежуточный результат
    cout << "\nОбъединение множеств:" << endl;
    cout << "A + B = ";
    for (int i = 0; i < D.GetSize(); i++)
    {
        cout << D.GetNum(i) << " ";
    }
    cout << endl;
    Set E = A * B;//Промежуточный результат
    cout << "\nПересечение множеств:" << endl;
    cout << "A * B = ";
    for (int i = 0; i < E.GetSize(); i++)
    {
        cout << E.GetNum(i) << " ";
    }
    cout << endl;
    Set C = D - E;//Результат
    cout << "\nРазница получившихся множеств:" << endl;
    cout << "(A+B) - (A*B) = ";
    for (int i = 0; i < C.GetSize(); i++)
    {
        cout << C.GetNum(i) << " ";
    }
    cout << endl;
}