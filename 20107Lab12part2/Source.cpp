#include <iostream>
#include<string>
#include<tchar.h>
#include<stdlib.h>
#include "stackclass.h"
#include "StackEmptyException.h"
#include "StackOverflowException.h"
int main()
{
	stackclass Sclass(3);
	for(int k = 0; k<5; k++)
	{
		try
		{
			Sclass.push('s');
		}
		catch(StackOverflowException SOF)
		{
			SOF.OutputMessage();
			break;
		}
	}

	for(int k=0; k<4 ; k++)
	{
		try
		{
			Sclass.pop();
		}
		catch(StackEmptyException SEE)
		{
			SEE.OutputMessage();
			break;
		}
	}
	return 0;
}
