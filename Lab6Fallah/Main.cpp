/* main.cpp

here to test the complex class

*/

#include "Complex.h"

void foo(Complex c){
	cout << "Inside foo()\n";
	Complex e(-1.1,0);
}
int main(){
	Complex c;
	cout << "Enter a complex number in form a+bi: ";
	c.scan(cin);
	Complex e;
	cout << "Enter a second Complex number: " ;
	e.scan(cin);
	Complex f = c+e;
	cout << " The sum of the numbers is; ";
	f.print(cout);
	cout<<endl;



	cout << " The product of the numbers is: ";
	Complex g= c.multiply(e);
	g.print(cout);
	cout<<endl;

	cout << " The quotient of the numbers is: ";
	Complex h = c.divide(e);
	h.print(cout);
	cout<<endl;

	cout << "The numbers subtracted: " ;
	Complex i = c-e;
	c.print(cout);
	cout << endl;



//	Enter a complex number in form a+bi: 2+3i
//Enter a second Complex number: 3+4i
// The sum of the numbers is; 5+7i
// The product of the numbers is: -6+17i
// The quotient of the numbers is: 0.72+0.04i
//The numbers subtracted: -1+-1i
//Destroying-1-1i
//Destroying0.72+0.04i
//Destroying-6+17i
//Destroying5+7i
//Destroying3+4i
//Destroying2+3i
//Press any key to continue . . .


	//cout << "the real part of the sum is " << f.getReal() << endl;
	//cout<< "Enter new value for real part: ";
	//double rr;
	//cin >>rr;
	//rr.print(cout);
	//cout <<endl;



	return 0;
}

