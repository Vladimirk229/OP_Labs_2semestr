#include "Header.h"

Leaf* addnode(char sym, Leaf* oldnode)//Функция добавления вершины в дерево
{
    if (oldnode == NULL)
    {
        Leaf* newnode;
        newnode = new Leaf;
        newnode->symbol = sym;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->level = 0;
        return(newnode);
    }
    else if (oldnode->left == NULL && oldnode->right == NULL)
    {
        Leaf* newnode = new Leaf;
        newnode->level = oldnode->level + 1;
        newnode->right = NULL;
        newnode->left = NULL;
        newnode->symbol = sym;
        oldnode->left = newnode;
        return(newnode);
    }
    else if (oldnode->left != NULL && oldnode->right == NULL)
    {
        Leaf* newnode = new Leaf;
        newnode->level = oldnode->level + 1;
        newnode->right = NULL;
        newnode->left = NULL;
        newnode->symbol = sym;
        oldnode->right = newnode;
        return(newnode);
    }
}

void TreeCheck(Leaf* StartNode, int* max)//Функция обхода дерева
{
    if (StartNode != NULL)
    {
        TreeCheck(StartNode->left, max);
        for (int i = 0; i < (StartNode->level) * 2; i++)
        {
            cout << " ";
        }
        cout << StartNode->symbol << endl;
        if (StartNode->level > *max)
        {
            *max = StartNode->level;
        }
        TreeCheck(StartNode->right, max);
    }
}
