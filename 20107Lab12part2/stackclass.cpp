#include "stackclass.h"


stackclass::stackclass(int s)
{
}


stackclass::~stackclass(void)
{
}

void stackclass::push(char c)
{
	i++;
		if(i=size)
		{
			throw StackOverflowException();
		}
		else{ ch[i]=c;
		}
}

char stack class::pop()
{
	i--;
	if(i<0)
	{
		throw StackEmptyException();
	}
	else{
		return ch[i];
	}
}