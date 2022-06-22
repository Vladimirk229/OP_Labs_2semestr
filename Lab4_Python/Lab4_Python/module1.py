import math
import random

#�������� �����
class MovingPoint:
    def SetCoordinates3D(self, x, y, z):#����� ����������� ��������� ��������� �����
        self._x = x
        self._y = y
        self._z = z
    def SetCoordinates2D(self, x, y):#����� ����������� ��������� ��������� �����
        self._x = x
        self._y = y
    def GetX(self):#����� ��������� ���������� �
        return self._x
    def GetY(self):#����� ��������� ���������� �
        return self._y
    def GetZ(self):#����� ��������� ���������� z
        return self._z
    def Distance2D(self, Point2):#����� ���������� ���������� ����� ����� ���������� �������
        dist=math.sqrt((Point2._x - self._x) * (Point2._x - self._x) + (Point2._y - self._y) * (Point2._y - self._y))
        return dist
    def Distance3D(self, Point2):#����� ���������� ���������� ����� ����� ���������� �������
        dist=math.sqrt((Point2._x - self._x) * (Point2._x - self._x) + (Point2._y - self._y) * (Point2._y - self._y) + (Point2._z - self._z) * (Point2._z - self._z))
        return dist
#����� ��� ������ � ���������� �������
class MovingPoint2(MovingPoint):
    def CoordCalculate(self, time):#����� ���������� ���������
        self._x = self._x + math.sin(time)
        self._y = self._y + math.cos(time)
#����� ��� ������ � ���������� �������
class MovingPoint3(MovingPoint):
    def CoordCalculate(self, time):#����� ���������� ���������
        self._x = self._x + math.sin(time)
        self._y = self._y + math.cos(time)
        self._z = self._z + (time*time)
