#pragma once

class Progression//�������� ������ ����������
{
private:
    int a;//������ ���� ���������
    int q;//�����������
    int n;//������ ���������
    int LastNum;//��������� ���� ���������
public:
    //--������� ��� ������� ������--
    void SetFirstNum(int a);
    void SetQ(int q);
    void SetSize(int n);
    //------------------------------
    int GetLastNum();//����� ���������� ���������� ����� ����������
};

int BiggestLastNum(Progression* ptr, unsigned int size);//�������� ������� ���������� ������� ���������� ����� ����������