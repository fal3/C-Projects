#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void process(ifstream & in, ofstream & out);

int main(){
	
	char infile[200];
	char outfile[200];
	cout << "Enter the input filename \n";
	cin.getline(infile,200);
	cout << "Enter the output filename \n";
	cin.getline(outfile, 200);
	ofstream out;
	ifstream in;
	in.open(infile);
	out.open(outfile);
	process(in,out);
	in.close(); 
	out.close();
	return 0;
	}
void process(ifstream & in, ofstream & out){


	char a;
	while(in>>noskipws >> a)
    {

		if(a >='A'&& a <='Z'){
           a=a+32;
		   out << a;}
		else if(a >='a'&& a <='z'){
            a=a-32;
			out << a;}
		else if(a=' ')
		{
			out << " " ;
		}

		else{
			out << a;}


    }

//	Enter the input filename
//C:\Users\fallaha\Desktop\Compsci\Computer Science programs\Comp201FallahLab1\lab
//2Testfile.txt
//Enter the output filename
//C:\Users\fallaha\Desktop\Compsci\Computer Science programs\Comp201FallahLab1\out
//putfile.txt
//Press any key to continue . . .

    
	
}
