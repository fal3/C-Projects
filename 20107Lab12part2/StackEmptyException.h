#pragma once
#include <iostream>
class StackEmptyException
{
public:
	StackEmptyException(void);{}
	void OutputMessage(){
		cout<< "Exception Type : Stack Empty Exception " << endl;
	}

	
	~StackEmptyException(void);
};

