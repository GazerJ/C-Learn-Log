#include <fstream>
#include <string>
#include <iostream>
using namespace std;
void load(string filename,int len){
    ifstream infile(filename);
	string file;
	infile >> file;
	cout<<"read file \t"<<file<<endl;
    infile >> file;
	cout<<"read file \t"<<file<<endl;
}



int main(){
    load("read.txt",2);
	return 0;
}