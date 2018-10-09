// 3-15.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main()
{
	int a, m;
	double b;
	cout << "请输入一个整数a：";
	cin >> a;
	cout << "请输入一个实数b：";
	cin >> b;
	cout << "请再输入一个整数m：";
	cin >> m;
	cout << a << "的" << m << "次方为：" << getPower(a, m) << endl;
	cout << b << "的" << m << "次方为：" << getPower(b, m);
	return 0;
}

int getPower(int x, int y) {
	int z;
	if (y < 0)
	{
		z = 0;
	}
	else if (y == 0)
	{
		z = 1;
	}
	else {
		z = x * getPower(x, y - 1);
	}return z;
}

double getPower(double x, int y) {
	double z;
	if (y < 0)
	{
		z = 0;
	}
	else if (y == 0)
	{
		z = 1;
	}
	else {
		z = x * getPower(x, y - 1);
	}return z;
}
