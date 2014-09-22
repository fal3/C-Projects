#pragma once

#include<iostream>
#include<fstream>
#include<algorithm>
#pragma once
#define EPSILON .000000000001

using namespace std;
class Complex
{
public:

private:
	double real;
	double imag;
public:
	Complex(double rp, double ip); //initializing constructor
	Complex(void); //default constructor
	~Complex(void); //destructor
	void print(ostream & out)const;
	void scan(istream & in); //scans a complex number in form a+bi
	Complex plus(const Complex & second);
	Complex multiply(const Complex & second)const ;
	Complex divide(const Complex & second)const ;
	Complex minus(const Complex & second)const  ;
	double getReal(void);
	void setReal(double r);
	double getImag() const;
	void setImag(double i);
	friend Complex operator +(const Complex left, const Complex right);
	friend Complex operator -(const Complex left, const Complex right);
	friend Complex operator /(const Complex left, const Complex right);
	//int operator*(void);
	///*bool operator ==*/
};

