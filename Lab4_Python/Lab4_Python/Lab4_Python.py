from module1 import *

def Min(array):#Функция вычисления минимального числа в списке
    min=array[0]
    for num in array:
        if num<min:
            min=num
    return min

#Ввод времени и количества точек
t = int(input("Enter time: "))
q = int(input("Number of 3D points: "))
k = int(input("Number of 2D points: "))
#Объявление и заполнение массивов объектов классов
PointArray3D = []
for i in range(q):
    buf=MovingPoint3()
    PointArray3D.append(buf)
PointArray2D = []
for i in range(k):
    PointArray2D.append(MovingPoint2())
#Объявление массивов с расстояниями между точками
iDistances3D=[]
iDistances2D=[]
#Генерация и вывод координат точек
for i in range(q):
    x=random.randint(0,10)
    y=random.randint(0,10)
    z=random.randint(0,10)
    print("Coordinates of 3D point",i,":")
    PointArray3D[i].SetCoordinates3D(x,y,z)
    print(PointArray3D[i].GetX(), PointArray3D[i].GetY(), PointArray3D[i].GetZ())
for i in range(k):
    x=random.randint(0,10)
    y=random.randint(0,10)
    print("Coordinates of 2D point",i,":")
    PointArray2D[i].SetCoordinates2D(x,y)
    print(PointArray2D[i].GetX(), PointArray2D[i].GetY())
#Вычисление и вывод расстояний между точками
count1=0
print("\nDistances between 3D points:")
for i in range(q):
    j=i
    while j<q:
        if j!=i:
            iDistances3D.append(PointArray3D[i].Distance3D(PointArray3D[j]))
            print("Distance between point", i, "and point", j, "=", iDistances3D[count1])
            count1+=1
        j+=1
count2=0
print("\nDistances between 2D points:")
for i in range(k):
    j=i
    while j<k:
        if j!=i:
            iDistances2D.append(PointArray2D[i].Distance2D(PointArray2D[j]))
            print("Distance between point", i, "and point", j, "=", iDistances2D[count2])
            count2+=1
        j+=1
#Вывод самых коротких расстояний
print("\nShortest distance between 3D points =",Min(iDistances3D))
print("Shortest distance between 2D points =",Min(iDistances2D))