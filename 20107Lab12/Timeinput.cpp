#include "Timeinput.h"
#include <iostream>
#include <fstream>

Timeinput::Timeinput(void)
	:h(0)
	,m(0)
{
}


Timeinput::~Timeinput(void)
{
}


void Timeinput::input(istream&in)
{
 cout << "Enter a 24 hour time: "
	
char col;
 in >> h >> col >> m;
	
} 