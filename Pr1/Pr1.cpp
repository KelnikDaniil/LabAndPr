﻿// Pr1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#define G -9.8
using namespace std; //Используется для дальнейшего использования имен из пространства std без приписывания "std::"
int main()
{

	setlocale(LC_ALL,"Russian"); //Устраняет проблемы с выводом на экран русского языка
	//1
	cout << "Результат выполнения 2+2*2=" << 2 + 2 * 2<<endl;
	//2
	int z=3, b=3.14;		
	double c = 3, d = 3.14;
	cout << z << endl << b << endl << c << endl << d << endl; //ИЗ дробной переменной b выводит только целую часть , так как тип переменной integer
	//3
	int e, f;
	cin >> e >> f;
	cout << e + f <<endl<< e - f << endl << e * f << endl << e / f << endl; //Деление выводит только целую часть от получившегося результата т.к. тип перепенных int, если сделать хотя бы одну переменную double , то резульат будет дробным
	//4 (с доп. переменной)
	int k, h,j;
	cout << "Введите 2 числовых значения"<<endl;
	cin >> k >> h;
	j = k;
	k = h;
	h = j;
	cout << k << endl << h<<endl;
	//4 (без доп. переменной)
	int s, r;
	cout << "Введите 2 числовых значения" << endl;
	cin >> s >> r;
	s= s + r;
	r = s - r;
	s = s - r;
	cout << s << endl << r<<endl;
	//5
	double x,x0,v0,t,a;
	cout << "Введите: x0,v0,t" << endl;
	cin >> x0 >> v0 >> t;
	a = G;
	cout << x0 + v0 * t + (a*t*t) / 2 << endl;
	cout << x0 + v0 * t + 1 / 2 * a*t*t << endl; // Неверный ответ так как числа 1 и 2 позиционируются как int и значение выражения 1 / 2 = 0
	system("PAUSE");
}

