#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

void fill(ifstream & in, vector<string> & v);
void print(vector<string> v);
void sort(vector<string> & v);

int main(){
	vector<string> word;
	ifstream in;
	char FileName[200];
	cout << "Enter Gettysburg Address text file name: ";
	cin.getline(FileName,200);
	in.open(FileName);
	fill(in, word);
	sort(word);
	print(word);
	cout << endl;
	return 0;
}

void fill(ifstream & in, vector<string> & v){
	string a;
	while(in >> a){
		v.push_back(a);
	}
}


void sort(vector<string> & v){
	for(int pass = 0; pass < (v.size()-1);pass++){
		for(int a = 0; a<v.size()-pass-1;a++){
			if(tolower(v[a][0]) > tolower(v[a+1][0])){
				string temp1 = v[a];
				v[a]= v[a+1];
				v[a+1] = temp1;
				}}}}

void print(vector<string> v){
	for(unsigned int i = 0; i < v.size(); i++){
		cout << setw(3) << v[i] << ",";

		if((i+1)%6 == 0)
			cout << endl;
	}
	cout << endl;
}


//Enter Gettysburg Address text file name: C:\Users\fallaha\Desktop\Compsci\Gettys
//burgaddress.txt
// --, --, --, --, --, --,
// --,and,ago,  a,and,all,
//are,are,  a,any,and,are,
//  a,  a, as,  a,altogether,and,
//  a,and,above,add,advanced.,  a,
//and,brought,battle-field,But,,brave,but,
// be, be,before,birth, by,continent,,
//conceived,created,civil,conceived,can,come,
//can,can,consecrate,can,consecrated,can,
//cause,dedicated,dedicated,,dedicate, do,dedicate,
//dead,,detract.,did,dedicated,dedicated,dead,
//devotion,devotion,dead,died,equal.,engaged,
//endure.,earth.,four,fathers,forth,field,,
//final,for,fitting,far,forget,for,
//fought,far,for,from,for,full,
//freedom,for,from,great,great,gave,
//ground.,great,gave,God,,government,have,
//here,hallow,here,,have,here,,here.,
//here,here,have,here,honored,here,
//highly,have,have, in, in, It,
// is, in,it,, it, It, is,
// It, is,increased, in,Liberty,,long,
//lives,live.,larger,living,little,long,
//living,,last,men,met,might,men,,
//measure,new,nation,,Now,nation,,nation,
//nation,not,not,not,note,,nor,
//never,nobly,not,nation,,new,not,
//our, on, or, on, of, of,
//our, or, of, of, of,proposition,
//portion,place,proper,poor,power,people,,
//people,,people,,perish,resting,remember,rather,,
//rather,remaining,resolve,score,seven, so,
// so,should,sense,,struggled,say, so,
//shall,shall,shall,this, to,the,
//that,testing,that,that, to,that,
//those,their,that,that,that,this.,
//this,The, to,The,they,the,
// to, to,the,they,thus, to,
// to,the,task,that,these,take,
// to,that,they,the,that,that,
//these,that,this,that,the,the,
//the,the, us,unfinished, us, us,
//under,vain, we,war,,whether, We,
//war., We,who, we, we, we,
// we,who,world,will,what, we,
//what,work,which,who, we,which,
// we,years,
//
//Press any key to continue . . .