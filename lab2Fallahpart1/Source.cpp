#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void averageit(double input[], double & average,int size);
void deviate(double input[], double & average,int size);

int main(){
	double input[200];
	int size=0; 
	cout << "Enter a set of numbers seperated by a space then hit <CTRL> z:  \n" ;
	while(cin>>input[size]){
		size++;
	}
	double average=0.0;
	averageit(input,average,size);
	deviate(input,average,size);
	return 0;
}


void averageit(double input[],double & average, int size){
	double sum=0.0;
	for(int i=0; i< size; i++)
	{sum=sum+input[i];}
	average =sum/size;
	

	
}

void deviate(double input[], double & average,int size){
	double devp1=0.0;
	double devp2[500]={0};
	for(int a=0;a<size;a++){
		devp2[a]=input[a];
		devp2[a]=(input[a]-average);
		devp2[a]=devp2[a]*devp2[a];
		devp1 =devp1+ devp2[a];
	}
	devp1=sqrt((devp1/size));
	cout<< "The standard deviation is: " << devp1<< "\n\n";
}

//Enter a set of numbers seperated by a space then hit <CTRL> z:
//2 4 4 4 5 5 7 9^Z
//The standard deviation is: 2
//
//Press any key to continue . . .