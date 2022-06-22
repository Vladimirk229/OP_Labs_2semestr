import math
import random

#Основной класс
class MovingPoint:
    def SetCoordinates3D(self, x, y, z):#Метод определения координат трёхмерной точки
        self._x = x
        self._y = y
        self._z = z
    def SetCoordinates2D(self, x, y):#Метод определения координат двумерной точки
        self._x = x
        self._y = y
    def GetX(self):#Метод получения координаты х
        return self._x
    def GetY(self):#Метод получения координаты у
        return self._y
    def GetZ(self):#Метод получения координаты z
        return self._z
    def Distance2D(self, Point2):#Метод вычисления расстояния между двумя двумерными точками
        dist=math.sqrt((Point2._x - self._x) * (Point2._x - self._x) + (Point2._y - self._y) * (Point2._y - self._y))
        return dist
    def Distance3D(self, Point2):#Метод вычисления расстояния между двумя трёхмерными точками
        dist=math.sqrt((Point2._x - self._x) * (Point2._x - self._x) + (Point2._y - self._y) * (Point2._y - self._y) + (Point2._z - self._z) * (Point2._z - self._z))
        return dist
#Класс для работы с двумерными точками
class MovingPoint2(MovingPoint):
    def CoordCalculate(self, time):#Метод вычисления координат
        self._x = self._x + math.sin(time)
        self._y = self._y + math.cos(time)
#Класс для работы с трёхмерными точками
class MovingPoint3(MovingPoint):
    def CoordCalculate(self, time):#Метод вычисления координат
        self._x = self._x + math.sin(time)
        self._y = self._y + math.cos(time)
        self._z = self._z + (time*time)
