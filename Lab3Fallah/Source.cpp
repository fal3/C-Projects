#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ROWS 21
#define COLS 79

void initialize(int gener[][COLS], int neighbors[][COLS]);
void printGen(int gener[][COLS]);
int getNeighbors(int gener[][COLS], int i, int j);
void GenerateNewG(int gener[][COLS], int neighbors[][COLS]);
void restart(int newc[][COLS]);


int main(){
 int gener[ROWS][COLS];
 int neighbors[ROWS][COLS];
 char cont = 'y';
 int genNum = 1;
 initialize(gener,neighbors);
 while (cont == 'y'){
  cout << endl << "Generation: " << genNum << endl;
  printGen(gener);
  cout << endl << "Press y for the next generation: ";
  cout << endl;
  cin >> cont;
  genNum++;
  GenerateNewG(gener,neighbors);
  restart(neighbors);
 }

 return 0;
}

void initialize(int gener[][COLS], int neighbors[][COLS]){
	srand(time(0));
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			if (i == 0 || j == 0){
				gener[i][j] = 2;
				neighbors[i][j] = 2;
			}
			else if(i == ROWS -1 || j == COLS-1)
			{
				gener[i][j] = 2;
				neighbors[i][j] = 2;
			}
			else
			{
				gener[i][j] = rand() % 2;
				neighbors[i][j] = 0;}
  }
 }
}

void printGen(int gener[][COLS]){
 for (int h = 1; h < COLS - 1; h++)
	 cout << "0";
	 cout << endl;
	 for (int i = 1; i < ROWS - 1; i++){
		 for (int j = 1; j < COLS - 1; j++){
			 if (gener[i][j] != 0 && gener[i][j] != 2)
				 cout << gener[i][j] << "  ";
			 else 
				 cout << "   ";
		 }
		 
		 cout << endl;
		 
	 }
}

int getNeighbors(int gener[][COLS], int i, int j){

	int num1=0;
 if (gener[i-1][j-1] == 1)
  num1 += 1;
 if (gener[i-1][j] == 1)
  num1 += 1;
 if (gener[i-1][j+1] == 1)
  num1 += 1;
 if (gener[i][j+1] == 1)
  num1 += 1;
 if (gener[i+1][j+1] == 1)
  num1 += 1;
 if (gener[i+1][j] == 1)
  num1 += 1;
 if (gener[i+1][j-1] == 1)
  num1 += 1;
 if (gener[i][j-1] == 1)
  num1 += 1;

 return num1;
}

void GenerateNewG(int gener[][COLS], int neighbors[][COLS]){ 
	for (int i = 1; i < ROWS - 1; i++){
		for (int j = 1; j < COLS - 1; j++){
			int n = getNeighbors(gener,i,j);
			neighbors[i][j] = n;

  }
 }

 for (int u = 1; u < ROWS - 1; u++){
  for (int h = 1; h < COLS - 1; h++){
   if (gener[u][h] == 1 && neighbors[u][h] < 2)
    gener[u][h] = 0;
   if (gener[u][h] == 1 && neighbors[u][h] > 3)
    gener[u][h] = 0;
   if (gener[u][h] == 0 && neighbors[u][h] == 3)
    gener[u][h] = 1;
  }
 }
}

void restart(int newc[][COLS]){
 for (int i = 0; i < ROWS; i++){
  for (int j = 0; j < COLS; j++){
   if (i == 0 || j == 0)
    newc[i][j] = 2;
   else if(i == ROWS -1 || j == COLS-1)
    newc[i][j] = 2;
   else
    newc[i][j] = 0;
  }
 } 
}
