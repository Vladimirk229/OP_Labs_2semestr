#include "Header.h"

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
    A.EnterNums(SizeA);//Ввод чисел для первого множества

    cout << "\nВведите " << SizeB << " чисел для множества B:" << endl;
    B.EnterNums(SizeB);//Ввод чисел для второго множества

    Set D = A + B;//Промежуточный результат
    cout << "\nОбъединение множеств:" << endl;
    cout << "A + B = ";
    D.SetPrint();
    cout << endl;

    Set E = A * B;//Промежуточный результат
    cout << "\nПересечение множеств:" << endl;
    cout << "A * B = ";
    E.SetPrint();
    cout << endl;

    Set C = D - E;//Результат
    cout << "\nРазница получившихся множеств:" << endl;
    cout << "(A+B) - (A*B) = ";
    C.SetPrint();
    cout << endl;
}