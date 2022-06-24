#include "Header.h"

//Основная функция
int main()
{
    setlocale(LC_ALL, "rus");
    //Создание дерева
    Leaf* Node1 = addnode('a', NULL);
    Leaf* Node2 = addnode('b', Node1);
    Leaf* Node3 = addnode('c', Node1);
    Leaf* Node4 = addnode('d', Node2);
    Leaf* Node5 = addnode('e', Node2);
    Leaf* Node6 = addnode('f', Node3);
    Leaf* Node7 = addnode('g', Node3);
    Leaf* Node8 = addnode('h', Node7);
    Leaf* Node9 = addnode('i', Node7);
    //Обход дерева, вычисление глубины и вывод дерева в ходе обхода
    cout << "Дерево:" << endl;
    int Max = 0;
    TreeCheck(Node1, &Max);
    cout << "Глубина дерева: " << Max;
}
