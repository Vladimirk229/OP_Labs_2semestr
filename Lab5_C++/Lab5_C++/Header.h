#pragma once
#include <iostream>

using namespace std;

struct Leaf//Структура вершины дерева
{
    char symbol;//Символ, хранящийся в вершине
    Leaf* right;//Указатель на правого потомка
    Leaf* left;//Указатель на левого потомка
    int level;//Уровень, на котором находится вершина
};

Leaf* addnode(char sym, Leaf* oldnode);//Функция добавления вершины в дерево
void TreeCheck(Leaf* StartNode, int* max);//Функция обхода дерева