#pragma once
#include <iostream>
class stackclass
{
	int size;
	int i;
	char *ch;
public:
	stackclass(int s){
		size = s;
		i = -1;
		ch = new char[size]
		for(int k=0; k<size;k++)
		{
			ch[k] = '0';
		}
	}
	void push(char c);
	char pop();
	~stackclass(void);
};

