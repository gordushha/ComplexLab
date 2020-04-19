#pragma once
#include<iostream>

using namespace std;
class Complex
{
public:
	Complex();//конструктор по умлчанию
	Complex(double x, double y);//конструктор инициализации
	Complex(Complex& A);//конструктор копирования
	void set(double x, double y);
	Complex get() const;
	//перегрузка операторов:
	friend Complex operator + (Complex& x, Complex& y);
	friend Complex operator * (Complex& x, Complex& y);
	friend Complex operator - (Complex& x, Complex& y);
	friend Complex operator / (Complex& x, Complex& y);
	Complex& operator = (const Complex& x);
	friend bool operator == (Complex& x, Complex& y);
	friend ostream& operator << (ostream& out, const Complex& y);
	friend istream& operator >> (istream& in, Complex& y);

private:
	double Re; //вещественная часть
	double Im;//мнимая часть
};