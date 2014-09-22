#pragma once
class StackOverflowException
{
public:
	StackOverflowException();{}
	void OutputMessage(){
		cout << "Exception Type :Stack Overflow " << endl;
	}

	~StackOverflowException(void);
};

