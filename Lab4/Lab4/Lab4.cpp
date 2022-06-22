#include "Header.h"//Подключение заголовочного файла

//Основной код
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    unsigned int t;//Переменная с временем
    cout << "Введите время: ";
    cin >> t;
    int q, k;
    cout << "\nВведите q: ";
    cin >> q;//Количество трёхмерных точек
    cout << "\nВведите k: ";
    cin >> k;//Количество двумерных точек
    MovingPoint3* PointArray3D = new MovingPoint3[q];
    MovingPoint2* PointArray2D = new MovingPoint2[k];
    int iDistances3D[100];
    int iDistances2D[100];

    //Ввод координат трёхмерных точек
    for (int i = 0; i < q; i++)
    {
        int x, y, z;
        x = rand() % 10;
        y = rand() % 10;
        z = rand() % 10;
        cout << "\nКоординаты трёхмерной точки №" << i << ": " << x << ", " << y << ", " << z << endl;
        PointArray3D[i].SetX(x);
        PointArray3D[i].SetY(y);
        PointArray3D[i].SetZ(z);
    }
    //Ввод координат двумерных точек
    for (int i = 0; i < k; i++)
    {
        int x, y;
        x = rand() % 10;
        y = rand() % 10;
        cout << "\nКоординаты x двумерной точки №" << i << ": " << x << ", " << y << endl;
        PointArray2D[i].SetX(x);
        PointArray2D[i].SetY(y);
    }

    unsigned int count1 = 0;
    cout << "\nРасстояние между трёхмерными точками: " << endl;
    for (int i = 0; i < q; i++)
    {
        for (int j = i; j < q; j++)
        {
            if (j != i)
            {
                iDistances3D[count1] = PointArray3D[i].Distance3D(PointArray3D[j]);
                cout << "\nРасстояние от точки " << i << " до точки " << j << " = " << iDistances3D[count1] << endl;
                count1++;
            }
        }
    }
    unsigned int count2 = 0;
    cout << "\nРасстояние между двумерными точками: " << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < k; j++)
        {
            if (j != i)
            {
                iDistances2D[count2] = PointArray2D[i].Distance2D(PointArray2D[j]);
                cout << "\nРасстояние от точки " << i << " до точки " << j << " = " << iDistances2D[count2] << endl;
                count2++;
            }
        }
    }

    //Вывод результатов
    cout << "\nМинимальное расстояние между трёхмерными точками: " << Min(&iDistances3D[0], count1);
    cout << "\nМинимальное расстояние между двумерными точками: " << Min(&iDistances2D[0], count2);
}
