#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string word;
	cout<<"input something"<<endl;
	cin>>word;
	
	ofstream outfile("out_file");
	outfile<<word<<endl;
	ifstream infile("out_file");
	
	string file;
	infile >> file;
	cout<<"read file \t"<<file<<endl;
	return 0;
}
