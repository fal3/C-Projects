#include <iostream>
using namespace std;

void input(int& hours, int& minutes);
void output(int hours, int minutes, char type);
int convertTo12Hour(int hours, char& type);

int main()
{
int hours;
int minutes;
char type;
char answer;

do {
input(hours, minutes);
hours = convertTo12Hour(hours, type);
if(hours<0 || hours>24 || minutes < 0 || minutes > 60){
	cout << "There is no such time as " ;
	cout<< hours << ":" << minutes << endl;
}

else{
	output(hours, minutes, type);
}

cout << "Perform another calculation? (y/n): ";
cin >> answer;

} while ((answer == 'Y') || (answer == 'y'));

return 0;
}
void input(int& hours, int& minutes)
{
cout << "Enter the time ";
char col;
cin >> hours>> col>> minutes;

}

void output(int hours, int minutes, char type)
{
if(hours < 12 && hours > 0 && minutes > 0 && minutes< 60){
	cout <<"That is the same as: "  << hours << ":" ;}
else{cout << "The 12 hour time is: " << hours << ":";}
cout.width(2);
cout.fill('0');
cout << minutes;
if (type == 'A')
cout << " A.M." << endl;
else
cout << " P.M." << endl;
}

int convertTo12Hour(int hours, char& type)
{
type='A';
int toReturn=hours;

if(hours==0||hours==12)
  toReturn=12;

if(hours>12)
 toReturn=hours-12;

if(hours>=12)
 type='P';

return toReturn;
}

//Enter the time 2:25
//That is the same as: 2:25 A.M.
//Perform another calculation? (y/n): y
//Enter the time 12:23
//The 12 hour time is: 12:23 P.M.
//Perform another calculation? (y/n): y
//Enter the time 24:00
//The 12 hour time is: 12:00 P.M.
//Perform another calculation? (y/n): y
//Enter the time 17:43
//That is the same as: 5:43 P.M.
//Perform another calculation? (y/n): y
//Enter the time 19:08
//That is the same as: 7:08 P.M.
//Perform another calculation? (y/n): y
//Enter the time 3:99
//There is no such time as 3:99
//Perform another calculation? (y/n): y
//Enter the time 23:05
//That is the same as: 11:05 P.M.
//Perform another calculation? (y/n): n
//Press any key to continue . . .