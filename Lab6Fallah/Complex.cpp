#include "Complex.h"
#include<iostream>
#include<fstream>


Complex::Complex(void)
	: real(0)
	, imag(0)
{


}


Complex::~Complex(void)
{
	cout << "Destroying";
	print(cout);
	cout << endl;
}


Complex::Complex(double rp, double ip)
	: real(rp),imag(ip)
{

	
}


void Complex::print(ostream & out)const
{
	out << real;
	if(imag>=0)
		out << "+";
	out << imag << "i";
}


void Complex::scan(istream & in)
{
	char ch;
	in>>real>>imag>>ch;
}


Complex Complex::plus(const Complex & second) 
{
	return Complex(real+second.real, imag+second.imag);
}


Complex Complex::multiply(const Complex & second) const
{
	return Complex((real*second.real - imag*second.imag), (imag*second.real + real*second.imag));
}

Complex Complex::divide(const Complex & second) const
{
	return Complex((real*second.real + imag*second.imag)/(second.real*second.real+second.imag*second.imag), (imag*second.real - real*second.imag)/(second.real*second.real+second.imag*second.imag));
}

Complex Complex::minus(const Complex & second) const
{
	return Complex(real-second.real, imag-second.imag);
}


double Complex::getReal(void) 
{
	return real;
}


void Complex::setReal(double r) 
{
	real = r;
}

double Complex::getImag()const{
	return imag;
}

void Complex::setImag(double i){
	imag = i;
}

Complex operator+(const Complex left, const Complex right){
	Complex total;
	total.setReal(left.real+right.real);
	total.setImag(left.imag+right.imag);
	return total;
	
}

Complex operator-(const Complex left, const Complex right){
	Complex difference;
	difference.setReal(left.real-right.real);
	difference.setImag(left.imag-right.imag);
	return total;
	
}

Complex operator /(const Complex left, const Complex right){
	Complex quotient;
	quotient.setReal(left



//int Complex::operator*(const Complex & second)const
//{
//	return Complex((real*second.real - imag*second.imag), (imag*second.real + real*second.imag));
//	
//}
//
//
//bool Complex ::operator==(const Complex & second) const
//{
//	
//	return fabs(real-second.real)<EPSILON && fabs (imag-second.imag)<EPSILON;
//	return false;
//
//}
//
//ostream & operator << (ostream & out, const Complex & c){
//	out << c.real;
//	if(c.imag>0)
//		out <<"+";
//	out << c.imag<< "i";
//	return out ;
//}