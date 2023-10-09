 //Create a file and write some text in it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream opfile("hello.txt");
	if(opfile.is_open()){
		opfile<<"This is my first file \n";
		opfile<<"This file has been created by file handling \n";
		opfile.close();
		cout<<"Text is written in the file"<<endl;
	}else{
		cout<<"File cant be opened"<<endl;
	}
}
