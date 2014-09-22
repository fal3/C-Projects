#include <iostream>
#include <fstream>
#include <ctime>
#define MAX 1000

using namespace std;

void fillarray(int a[], int size);
void printarray(int a[], int size, ostream & out);
int search(int a[],int size/*, int target*/);
void sort(int a[], int size);

int main(){
	int a[MAX];
	int size;
	cout << "What the size of the array ? (up to "<<MAX <<")\n";
	cin >> size;
	if(size >MAX){
		size = MAX;
		cout << "cutting size down to 1000 ";
	}
	int target =0;
	fillarray(a,size);
	printarray(a,size,cout);
	search(a,size/*,target*/);
	return 0;

}

void printarray(int a[], int size, ostream & out){
	for (int i=0; i<size; i++){
    out << a[i] << "  ";
	}
  out << '\n';
}

void fillarray(int a[], int size){
	srand(time(0));
	
	for(int i =0; i < size;i++){
		a[i] = rand()%100;
}
}

int search(int a[],int size/*, int target*/){
	for(int i=0; i<size ; i++){
	a=a+a[i];
	cout << a;
	return 0;
	}
}