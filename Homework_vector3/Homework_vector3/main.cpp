#include<iostream>
#include<stdlib.h>
using namespace std;

class Vec3
{
private:
	int x, y, z;

public:
	Vec3(int, int, int);

	void leer();
	void mayor();
	void menor();
	void mayorigual();
	void menorigual();
	void igual();
	void diferente();
};

Vec3::Vec3(int _x, int _y, int _z)
{
	x = _x;
	y = _y;
	z = _z;
}
void Vec3::leer()
{
	cout << "X=" << x << "  Y=" << y << "  Z=" << z << endl << endl;
}
void Vec3::mayor()
{
	cout << "MAYOR" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y < x);
	operacionxz = (z < x);
	operacionyz = (z < y);
	cout <<"X es mayor que Y = "<< operacionxy << endl << "X es mayor que Z = " << operacionxz << endl << "Y es mayor que Z = " << operacionyz << endl << endl;
}

void Vec3::menor()
{
	cout << "MENOR" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y > x);
	operacionxz = (z > x);
	operacionyz = (z > y);
	cout << "X es menor que Y = " << operacionxy << endl << "X es menor que Z = " << operacionxz << endl << "Y es menor que Z = " << operacionyz << endl << endl;
}
void Vec3::mayorigual()
{
	cout << "MAYORIGUAL" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y <= x);
	operacionxz = (z <= x);
	operacionyz = (z <= y);
	cout << "X es mayorigual que Y = " << operacionxy << endl << "X es mayorigual que Z = " << operacionxz << endl << "Y es mayorigual que Z = " << operacionyz << endl << endl;
}

void Vec3::menorigual()
{
	cout << "MENORIGUAL" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y >= x);
	operacionxz = (z >= x);
	operacionyz = (z >= y);
	cout << "X es menorigual que Y = " << operacionxy << endl << "X es menorigual que Z = " << operacionxz << endl << "Y es menorigual que Z = " << operacionyz << endl << endl;
}

void Vec3::igual()
{
	cout << "IGUAL" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y == x);
	operacionxz = (z == x);
	operacionyz = (z == y);
	cout << "X es menorigual que Y = " << operacionxy << endl << "X es menorigual que Z = " << operacionxz << endl << "Y es menorigual que Z = " << operacionyz << endl << endl;
}

void Vec3::diferente()
{
	cout << "DIFERENTE" << endl << endl;
	bool operacionxy, operacionxz, operacionyz;
	operacionxy = (y != x);
	operacionxz = (z != x);
	operacionyz = (z != y);
	cout << "X es diferente que Y = " << operacionxy << endl << "X es diferente que Z = " << operacionxz << endl << "Y es diferente que Z = " << operacionyz << endl << endl;
}

int main() 
{
	cout << "Si sale un uno es que es se cumple la condicion y si sale un 0 es que no se cumple" << endl << endl;
	Vec3 v1 = Vec3(9, 7, 5);
	v1.leer();
	v1.menor();
	v1.mayor();
	v1.menorigual();
	v1.mayorigual();
	v1.igual();
	v1.diferente();

	system("pause");
	return 0;
}