#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
#define MAX 9999

void expand(string & Address, string ST[], string State[], int n);

int main(){
	ifstream in;
	ofstream out;
	string word;
	string ST[] = {"AL", "AK", "AS", "AZ", "AR", "CA", "CO", "CT", "DE", "DC", "FL", "GA", "GU", "HI", "ID", "IL", "IN", 
		"IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT", "NE", "NV", "NH", "NJ", "NM",
		"NY", "NC", "ND", "MP", "OH", "OK", "OR", "PA", "PR", "RI", "SC", "SD", "TN", "TX", "UT", "VT", "VA", "VI",
		"WA", "WV", "WI", "WY"};
	string State[] = {"Alabama","Alaska","American Samoa","Arizona","Arkansas","California",
		"Colorado","Connecticut","Delaware","District of Columbia","Florida","Georgia",
		"Guam","Hawaii","Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky","Louisiana",
		"Maine","Maryland","Massachusetts","Michigan","Minnesota","Mississippi","Missouri","Montana",
		"Nebraska","Nevada","New Hampshire","New Jersey","New Mexico","New York","North Carolina",
		"North Dakota","Northern Marianas Islands","Ohio","Oklahoma","Oregon","Pennsylvania","Puerto Rico",
		"Rhode Island","South Carolina","South Dakota","Tennessee","Texas","Utah","Vermont","Virginia","Virgin Islands",
		"Washington", "West Virginia", "Wisconsin", "Wyoming"};
	int n = 55;
	char FileName[200];
	cout << "Enter the input file name: ";
	cin.getline(FileName,200);
	in.open(FileName);
	if(!in.is_open()){
		cout << "Uh oh, the program " << FileName << endl;
		cout << "did not open, Exiting program" << endl;
		exit(-2);
	}
	char outFileName[200];
	cout << "Enter the output file name: ";
	cin.getline(outFileName,200);
	out.open(outFileName);
	if(!out.is_open()){
		cout << "Uh oh, the program " << FileName << endl;
		cout << "did not open, Exiting program" << endl;
		exit(-2);
	}
	while(in >> word){
		expand(word, ST, State, n);
		out << word << " ";
		cout << word << " ";
	}
	out << endl;
	cout << endl;
	return 0;
}

void expand(string & Address, string ST[], string State[], int n){
	for(int i = 0; i < n; i++){
			if(Address == ST[i]){
				Address = State[i];
				break;
			}
	}
}
