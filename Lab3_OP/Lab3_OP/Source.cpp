#include "Header.h"

//����������� ������ �� ���������
Set::Set()
{
    usiNumCount = 0;
}

//����������� ������, ����������� ������
Set::Set(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        iNumbers[i] = *(array + i);
        usiNumCount = i;
    }
}

//����� ������, ��������������� ��������� ����� �� ���������
void Set::SetNum(int NextNum)
{
    iNumbers[usiNumCount] = NextNum;
    usiNumCount++;
}

//����� ������, ������������ ����������� ����� �� ���������
int Set::GetNum(int Num)
{
    return(iNumbers[Num]);
}

//����� ������, ������������ ������ ���������
int Set::GetSize()
{
    return(usiNumCount);
}

//��������������� �������� ��������� �������� ����������� �������� (����������� ���� ��������� � ���� ���������)
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


//��������������� �������� ��������� �������� ����������� �������� (���������� ����� ���������)
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


//��������������� �������� ������� ������� �������� 
//(������ ��������� �����, ��� ���� ��� �� ����� �� ������� ���������, ������� ��� �� ������) 
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