#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>  
#define MAX 1000
using namespace std;
void sorts(string a[],double gpa[], ifstream & in, ofstream & out, int size);
int findsize(string a[], double gpa[],ifstream & in);
void printarray(string a[], double gpa[], int size, ofstream & out);
int main(){
	string a[MAX];
	double gpa[MAX];
	char infile[200];
	char outfile[200];
	cout << "Enter the input filename \n";
	cin.getline(infile,200);
	cout << "Enter the output filename \n";
	cin.getline(outfile,200);
	ifstream in;
	ofstream out;
	in.open(infile);
	out.open(outfile);
	int size=findsize(a,gpa,in);
	sorts(a,gpa,in,out,size);
	in.close();
	out.close();
	return 0;
}

void sorts(string a[],double gpa[], ifstream & in, ofstream & out, int size){
	//bubble sort
	for(int i=0;i < size;i++){//passes
		for(int j=0;j<size-i-1;j++){//comparrisons
			if(a[j]> a[j+1]){
				string temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				double temp1=gpa[j];
				gpa[j]=gpa[j+1];
				gpa[j+1]=temp1;


			}}}
	printarray(a,gpa,size,out);
}

int findsize(string a[],double gpa[], ifstream & in){
	int i(0);
	while(in >> a[i] >> gpa[i])
	{
		i++;
	}
	int size = i;
	return size;




}

void printarray(string a[], double gpa[], int size, ofstream & out){
	out << "\tName"<<"\tGpa\n";

	for(int i =0;i<size;i++){
		out << "\t" << a[i] <<"\t"<<gpa[i]<< "\n";
	}}

//C:\Users\fallaha\Desktop\Compsci\Computer Science programs\lab2part2Fallah\lab2part2Fallah\gpafile.txt
//C:\Users\fallaha\Desktop\Compsci\Computer Science programs\lab2part2Fallah\lab2part2Fallah\newgpafile.txt